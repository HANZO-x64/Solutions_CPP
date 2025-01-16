#include <iostream>
#include <string>
#include <curl/curl.h>
#include <fstream>
#include <vector>
#include <nlohmann/json.hpp>
#include "requestProcessing.h"
#include "searchForText.h"
#include "fetchPage.h"

using namespace std;
using namespace nlohmann;
 
// Функция для чтения ссылок из файла
vector<string> ReadLinksFromFile(const string& filename) {
    ifstream file(filename);
    vector<std::string> links;
    string line;

    if (file.is_open()) {
        while (std::getline(file, line))
        {
            // Проверка строки
            if (!line.empty()) {
                links.push_back(line);
            }
        }
        file.close();
    }
    else {
        cerr << "Не удалось открыть файл: " << filename << endl;
    }

    return links;
}

int main()
{
    setlocale(LC_ALL, "ru");
    
    // Читаем ссылки из файла
    const string filename = "url_list.txt";
    // JSON для парсинга страницы
    json jsonDataForParser;
    vector<string> links = ReadLinksFromFile(filename);

    // Функция обрабатка каждой ссылки.
    for (const auto& url : links)
    {
        std::cout << "Обработка ссылки: " << url << std::endl;
        
        string htmlContent = FetchPage(url);
        // Здесь можете выполнить дальнейшие действия с htmlContent

        GumboOutput* output = gumbo_parse(htmlContent.c_str());
        std::string result;

        // Traverse the parse tree to find relevant informationd
        // Пройдите по дереву синтаксического анализа, чтобы найти нужную информацию.
        searchForText(output->root, result);
        gumbo_destroy_output(&kGumboDefaultOptions, output);

        // Writing data to a JSON file.
        // Запись данных в JSON файл.  
        jsonDataForParser["Key 1"] = links;
        jsonDataForParser["Key 2"] = result;
        // Save JSON to a file
        // Сохраняем JSON в файл
        std::ofstream o("DataForParser.json");
        o << std::setw(4) << jsonDataForParser << std::endl; // форматированный вывод
        o.close();

        std::cout << "Данные успешно сохранены в data.json" << std::endl;

    }
    return 0;
}
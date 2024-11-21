#include <iostream>
#include <string>
#include <curl/curl.h>
#include "requestProcessing.h"
#include "searchForText.h"
#include "fetchPage.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const std::string url = "https://studycli.org/chinese-holidays/lantern-festival/";
    std::string htmlContent = FetchPage(url);

    GumboOutput* output = gumbo_parse(htmlContent.c_str());
    std::string result;

    // Traverse the parse tree to find relevant informationd
    // Пройдите по дереву синтаксического анализа, чтобы найти нужную информацию.
    searchForText(output->root, result);

    gumbo_destroy_output(&kGumboDefaultOptions, output);

    // Output the collected information (you would need to refine this part)
    // Вывод собранной информации (эту часть вам необходимо будет доработать)
    cout << "Извлеченная информация о Празднике фонарей:" << endl;
    cout << "=================================================================================================================================================" << endl;
    cout << result << endl;
    cout << "=================================================================================================================================================" << endl;

    return 0;
}

/*
    request - запрос
    processing - обработка

    requestProcessing

*/
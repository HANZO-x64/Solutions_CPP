#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <io.h>
#include <fcntl.h>

int main()
{
	// Создаю экземпляр JSON-объекта
	nlohmann::json JsonData;
	
	// Данные для записи
	std::string filename;
	std::string name;
	int age;

	// Записываю имя JSON-файл
	std::cout << "Enter the name of the JSON-file (without extension): " << std::endl;
	std::getline(std::cin, filename);
	filename += ".json";
	
	// Сбор данных 
	std::cout << "Enter your name: " << std::endl;
	std::getline(std::cin, name);
	std::cout << "Enter your age: " << std::endl;
	std::cin >> age;

	// Записываю данные в JSON-объект
	JsonData["name"] = name;
	JsonData["age"] = age;

	// Записываю JSON-объект в файл
	std::ofstream file(filename);
	if (file.is_open())
	{
		file << JsonData.dump(4); // Запись с отступами в 4 пробела
		file.close();
		std::cout << "Data successfully written to " << filename << "." << std::endl;
	}
	else
	{
		std::cerr << "Failed to open file for writing." << std::endl;
	}

	return 0;
}
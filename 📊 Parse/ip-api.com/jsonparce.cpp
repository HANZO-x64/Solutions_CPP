/*
*   Делаем get запрос на сервер
*   Парсим ответ на json
*   Обращение к сайту: ip-api.com
*/

#include <iostream>
#include "Client.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>;

std::string getFiledFromJson(std::string json, std::string field);

int main()
{
    Client client;
    std::string res = client.getResponse("google.com");


    std::cout << getFiledFromJson(res, "lon");

    return 0;
}

std::string getFiledFromJson(std::string json, std::string field)
{
    std::stringstream jsomEncoded(json);
    boost::property_tree::ptree root;
    boost::property_tree::read_json(jsomEncoded, root);

    if (root.empty())
        return "Nothing found.";

    return root.get<std::string>(field);
}
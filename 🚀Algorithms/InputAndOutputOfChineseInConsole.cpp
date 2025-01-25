#include <iostream>
#include <fstream>
#include <io.h>
#include <fcntl.h>
#include <string>

// Обязательно шрифт консоли KaiTi!!! 
// Пример вывода китайских иероглифов
int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT); // вывод
    _setmode(_fileno(stdin), _O_U16TEXT); // ввод

    std::wstring name;

    std::wcout << L"输入您的姓名：" << std::endl; // "Введите свое имя:"
    std::wcin >> name;
    // Или можно так:
    // std::getline(std::wcin, name);
    std::wcout << L"你好 " << name << L"!" << std::endl; // "Привет ... !"

    return 0;
}

/*
*   Если иероглифы не видны, попробовать установить китайскую раскладку: 
*   Настройки языка > Добавить язык > Китайский (упрощенное письмо, Китай). <-OS:Windows10.
*/ 
#include <iostream>
#include <string>

// - - - - - - - Ключевое слово static - - - - - - - //

// Статические поля класса. инициализация. Ключеове слово static.

using namespace std;
class Apple;

class Apple
{
public:
    static int Count;

    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        Count++;
    }

private:
    int weight;
    string color;
};

int Apple::Count = 0;

int main() 
{
    setlocale(LC_ALL, "Russian");

    Apple apple(160, "red");
    Apple apple2(100, "green");
    Apple apple3(220, "yellow");

    // По номеру яблока:
    //std::cout << apple.Count << std::endl;  
    //std::cout << apple2.Count << std::endl;
    //std::cout << apple3.Count << std::endl;

    std::cout << Apple::Count << std::endl;

    return 0;
}
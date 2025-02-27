#include <iostream>
#include <string>

// - - - - - - - Дружественные классы - - - - - - - //

// Использовать дружественные классы очень осторожно!

using namespace std;
class Human;
class Apple;

class Human
{
public:
    void TakeApple(Apple& apple);

    void EatApple(Apple& apple)
    {

    }
};

class Apple
{
    friend Human;

public:
    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
    }

private:
    int weight;
    string color;
};

void Human::TakeApple(Apple& apple)
{
    cout << "RakeAppel " << "weight = " << apple.weight << ", color = " << apple.color << endl;
};

int main() 
{
    setlocale(LC_ALL, "Russian");

    Apple apple(160, "red");
    Human human;
    human.TakeApple(apple);


    return 0;
}
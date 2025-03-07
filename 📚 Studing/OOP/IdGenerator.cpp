// - - - - - - - ID generator - - - - - - - //
#include <iostream>
#include <string>

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
        id = Count;
    }
    
    int GetId()
    {
        return id;
    }

private:
    int weight;
    string color;
    int id;
};

int Apple::Count = 0;

int main() 
{
    Apple apple(160, "red");
    Apple apple2(100, "green");
    Apple apple3(220, "yellow");

    // По номеру яблока:
    std::cout << apple.GetId() << std::endl;  
    std::cout << apple2.GetId() << std::endl;
    std::cout << apple3.GetId() << std::endl;


    return 0;
}
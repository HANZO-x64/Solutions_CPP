#include <iostream>
#include <string>

/*
*    Агрегация и композиция
*/

// Пример агригации:
class Cap // Кепка
{
public:
    std::string GetColor()
    {
        return color;
    }
private:
    std::string color = "red";
};

// Пример композиции:
class Human // человек
{
public:
    void Think()
    {
        brain.Think();
    }
    void InspectTheCap()
    {
        std::cout << "HUMAN: My cap is " << cap.GetColor() << " color." << std::endl;
    }
private:
    class Brain // мозг
    {
    public:
        void Think()
        {
            std::cout << "HUMAN: I think!" << std::endl;
        }
    };
    Brain brain;
    Cap cap;
};

class Model
{
public:
    void InspectModel()
    {
        std::cout << "MODEL: Cap is " << cap.GetColor() << " color." << std::endl;
    }
private:
    Cap cap;
};

int main() 
{
    Human human;
    Model model;

    // Композиция:
    human.Think();

    // Агригация:
    human.InspectTheCap();
    model.InspectModel();


    return 0;
}
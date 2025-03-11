#include <iostream>
#include <string>

/*
*    Наследование классов
*   (одиночное наследование)
* 
*   Родительский (базовый) класс - от которого наследовались
*   Дочерний (производный) класс - унаследовал свойства или поведения базого класса и добавил что-то своё.
*/

class Human
{
private:
    std::string name;
public:
    std::string GetName() { return name; }
    void SetName(std::string name)
    {
        this->name = name;
    }
};

class Student : public Human
{
public:
    std::string group;

    void Learn()
    {
        std::cout << "I'm studying!" << std::endl;
    }
};

class ExtramuralStudent : public Student
{
public:
    void Learn()
    {
        std::cout << "I study and work." << std::endl;
    }
};

class Professor : public Human
{
public:
    std::string subject;

};

int main() 
{
    Professor pr;

    Student st;
    st.SetName("Anton");
    std::cout << st.GetName() <<": ";
    st.Learn();

    ExtramuralStudent extraSt;
    extraSt.SetName("Jora");
    std::cout << extraSt.GetName() << ": ";
    extraSt.Learn();

    return 0;
}
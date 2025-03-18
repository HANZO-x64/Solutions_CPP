#include <iostream>
#include <string>

/*
*    Спецификаторы доступа при наследовании
*/

class A
{
public:
    std::string msgOne = "Message one.";

private:
    std::string msgTwo = "Message two.";

protected:
    std::string msgThree = "Message three.";
};

class B : public A // "public A" - Исходный модификатор доступа, могут быть: "private A" и "protected A"
{
public:
    void PrintMsgOne()
    {
        std::cout << msgOne << std::endl; // можем
    }
    /*
    * void PrintMsgTwo()
    * {
    *   std::cout << msgTwo << std:: endl; // не можем
    * }
    */
    void PrintMsgThree()
    {
        std::cout << msgThree << std::endl; // можем
    }
};

int main() 
{
    B b;

    // public:
    b.PrintMsgOne();
    b.msgOne;  // можем  

    // protected:
    b.PrintMsgThree();
    // b.msgTghree; // не можем


    return 0;
}
/*
    Таблица модификаторов:

    ---------------------------------------------------------
                    |    Исходные модификаторы доступа      |
                    |---------------------------------------|
                    |   public  |   private |   protected   |
    ---------------------------------------------------------
    public-         |   public  |   private |   protected   |
    наследование    |           |           |               |
    ---------------------------------------------------------
    private-        |   private |   private |   private     |
    наследование    |           |           |               |
    ---------------------------------------------------------
    protected-      | protected | protected |   protected   |
    наследование    |           |           |               |
    ---------------------------------------------------------

*/
#include <iostream>
#include <string>

// Массив объектов классов.
// Статический и динамический массив.

class Pixel
{
public:
    Pixel() // default constructor
    {
        R = G = B = 0;
    }

    Pixel(int R, int G, int B)
    {
        this->R = R;
        this->G = G;
        this->B = B;
    }
    std::string GetInfo()
    {
        return "Pixel:\n\tR = " + std::to_string(R) + "\n\tG = " + std::to_string(G) + "\n\tB = " + std::to_string(B);
    }
private:
    int R;
    int G;
    int B;
};

class Image
{
public:
    void GetImageInfo()
    {
        for (int i = 0; i < LENGTH; i++)
        {
            std::cout << "#" << i << " " << pixeles[i].GetInfo() << std::endl;
        }
    }

private:

    static const int LENGTH = 5;

    Pixel pixeles[LENGTH]
    {
        Pixel(0,4,64),
        Pixel(4,54,164),
        Pixel(111,124,224),
        Pixel(98,241,22),
        Pixel(72,114,99)
    };
};

int main() 
{
    const int LENGTH = 5;


    // Статический массив:
    //Pixel arr[LENGTH];
    //arr[0] = Pixel(1, 125, 99);
    //std::cout << arr[0].GetInfo() << std::endl;


    /*-----------------------------------------------------------*/


    // Динамический массив:
    Pixel* arr = new Pixel[LENGTH];
    arr[0] = Pixel(0, 99, 199);
    std::cout << arr[0].GetInfo() << std::endl;
    delete[] arr;


    return 0;
}
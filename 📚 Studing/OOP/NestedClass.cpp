#include <iostream>
#include <string>

// Вложенный класс

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
    class Pixel
    {
    public:
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
    Image img;
    img.GetImageInfo();


    return 0;
}
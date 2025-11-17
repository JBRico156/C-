#include <iostream>

class Point
{
private:
    int _x;
    int _y;

public:

    Point(int x, int y)
        : _x(x), _y(y)
    {
    }

    void print() const
    {
        std::cout << "Pisteen koordinaatit: (" << _x << ", " << _y << ")" << std::endl;
    }
};

int main()
{

    Point p1(10, 20);

    p1.print();

    Point origin(0, 0);
    origin.print();

    return 0;
}
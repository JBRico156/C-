#include <iostream>

class Box
{
private:
    int _size = 0;

public:
    Box()
    {
        std::cout << "Box object created (dynamic allocation)." << std::endl;
    }

    ~Box()
    {
        std::cout << "Box object destroyed (memory freed)." << std::endl;
    }

    void set_size(int size)
    {
        _size = size;
    }

    void show_size() const
    {
        std::cout << "Box size is: " << _size << std::endl;
    }
};

int main()
{
    Box* b = new Box();

    b->set_size(42);
    b->show_size();

    delete b;

    b = nullptr;

    return 0;
}
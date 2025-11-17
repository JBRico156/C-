#include <iostream>
#include <string>

class Lamp
{
private:

    bool _on = false;

public:

    Lamp()
    {
        std::cout << "Lamp created" << std::endl;
        _on = false;
    }

    ~Lamp()
    {
        std::cout << "Lamp destroyed" << std::endl;
    }

    void turn_on()
    {
        _on = true;
        std::cout << "Lamp is now ON." << std::endl;
    }

    void turn_off()
    {
        _on = false;
        std::cout << "Lamp is now OFF." << std::endl;
    }
};

int main()
{

    Lamp my_lamp;

    my_lamp.turn_on();

    my_lamp.turn_off();

    my_lamp.turn_on();

    my_lamp.turn_off();


    return 0;
}
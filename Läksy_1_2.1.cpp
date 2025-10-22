#include <iostream>
#include <string>

int main() 
{
    std::string name;
    std::cout << "Mikä sinun nimesi on?: ";
    std::cin >> name;
    std::cout << "Terve " << name << "!" << std::endl;
    return 0;
}

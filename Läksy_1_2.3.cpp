#include <iostream>
#include <string>

int main()
{
    int x, y;
    int sum;
    int sum_2;

    std::cout << "Anna suorakulmion kanta: ";
    std::cin >> x;
    std::cout << "Anna suorakulmion korkeus: ";
    std::cin >> y;

    sum = x * y;
    sum_2 = (x * 2) + (y * 2);

    std::cout << "Suorakulmion pinta-ala: " << sum << std::endl;
    std::cout << "Suorakulmion piiri: " << sum_2 << std::endl;

    return 0;
}


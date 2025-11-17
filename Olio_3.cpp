#include <iostream>
#include <string>
#include <algorithm>

class Auto
{
private:

    std::string rekisteritunnus_;
    int nopeus_;
    int huippunopeus_;
    int kuljettu_matka_;
    int kuljettu = 0;

public:

    static int Tehty;

    Auto(const std::string& rekisteritunnus, int huippunopeus, int nopeus = 0, int kuljettu_matka = 0)
        : rekisteritunnus_(rekisteritunnus),
        huippunopeus_(huippunopeus),
        nopeus_(nopeus),
        kuljettu_matka_(kuljettu_matka)
    {
    }

    void kiihdyta(int kiihdytys)
    {
        nopeus_ += kiihdytys;
        nopeus_ = std::max(0, nopeus_);
        nopeus_ = std::min(huippunopeus_, nopeus_);
    }

    int get_nopeus() const
    {
        return nopeus_;
    }

    void kulje(int tunti)
    {
        kuljettu = tunti * nopeus_;
        kuljettu_matka_ += kuljettu;
    }

    int get_kuljettu_matka_() const
    {
        return kuljettu_matka_;
    }
};

int Auto::Tehty = 0;

int main()
{

    Auto toyota("ABC-123", 142);

    toyota.kiihdyta(30);
    toyota.kulje(2);
    std::cout << toyota.get_nopeus() << "km/h" << std::endl;
    std::cout << toyota.get_kuljettu_matka_() << "km" << std::endl;

    toyota.kiihdyta(70);
    toyota.kulje(3);
    std::cout << toyota.get_nopeus() << "km/h" << std::endl;
    std::cout << toyota.get_kuljettu_matka_() << "km" << std::endl;

    toyota.kiihdyta(50);
    toyota.kulje(4);
    std::cout << toyota.get_nopeus() << "km/h" << std::endl;
    std::cout << toyota.get_kuljettu_matka_() << "km" << std::endl;

    toyota.kiihdyta(-200);
    std::cout << toyota.get_nopeus() << "km/h" << std::endl;

    return 0;
}
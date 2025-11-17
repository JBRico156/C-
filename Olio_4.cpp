#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>

class Auto
{
private:
    std::string rekisteritunnus_;
    int huippunopeus_;
    int nopeus_;
    double kuljettu_matka_;

public:
    // **Konstruktori**
    Auto(const std::string& rekisteritunnus, int huippunopeus)
        : rekisteritunnus_(rekisteritunnus),
        huippunopeus_(huippunopeus),
        nopeus_(0),
        kuljettu_matka_(0.0)
    {
    }

    void kiihdyta(int kiihdytys)
    {
        nopeus_ += kiihdytys;

        nopeus_ = std::max(0, nopeus_);
        nopeus_ = std::min(huippunopeus_, nopeus_);
    }

    void kulje(double aika_tunnit)
    {
        double kuljettu = aika_tunnit * nopeus_;
        kuljettu_matka_ += kuljettu;
    }
    int get_huippunopeus() const { return huippunopeus_; }
    int get_nopeus() const { return nopeus_; }
    double get_kuljettu_matka() const { return kuljettu_matka_; }
    const std::string& get_rekisteritunnus() const { return rekisteritunnus_; }
};

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> huippunopeus_dist(100, 200);

    std::uniform_int_distribution<> kiihdytys_dist(-10, 15);

    std::vector<Auto> autot;

    for (int i = 1; i <= 10; ++i)
    {
        int alku_nopeus = huippunopeus_dist(gen);
        std::string rekisteri = "ABC-" + std::to_string(i);

        autot.emplace_back(rekisteri, alku_nopeus);
    }

    double max_matka = 0.0;
    const double TAVOITE_MATKA = 10000.0;
    const double KULJE_AIKA = 1.0;

    std::cout << "Kilpailu alkaa! Tavoite: " << TAVOITE_MATKA << " km." << std::endl;

    while (max_matka < TAVOITE_MATKA)
    {
        for (Auto& auto_ref : autot)
        {
            int muutos1 = kiihdytys_dist(gen);
            auto_ref.kiihdyta(muutos1);
        }
        for (Auto& auto_ref : autot)
        {
            auto_ref.kulje(KULJE_AIKA);
            max_matka = std::max(max_matka, auto_ref.get_kuljettu_matka());
        }
    }
    std::cout << "\n==============================================" << std::endl;
    std::cout << "             Kilpailu päättyi!  " << std::endl;
    std::cout << "==============================================\n" << std::endl;

    for (const Auto& auto_ref : autot)
    {
        std::cout << "Auton rekisteri: " << auto_ref.get_rekisteritunnus() << std::endl;
        std::cout << "Auton huippunopeus: " << auto_ref.get_huippunopeus() << " km/h" << std::endl;
        std::cout << "Auton nopeus: " << auto_ref.get_nopeus() << " km/h" << std::endl;
        std::cout << "Kuljettu matka: " << auto_ref.get_kuljettu_matka() << " km" << std::endl;
        std::cout << " " << std::endl;
    }

    return 0;
}
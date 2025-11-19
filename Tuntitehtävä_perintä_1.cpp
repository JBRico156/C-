//Tee kaksi luokkaa : Henkilö ja Opiskelija.Opiskelija perii Henkilö - luokan.Lisää Henkilö - luokkaan
//nimi - jäsentietue ja Opiskelija - luokkaan opiskelijanumero.Luo Opiskelija - olio ja aseta sen kaikki
//jäsentiedot.
#include <iostream>
#include <string>

class Henkilo {
private:
    std::string _name;

public:
    Henkilo(const std::string& name) : _name(name) {}

    Henkilo() : _name("") {}

    void set_name(const std::string& name) {
        _name = name;
    }

    std::string get_name() const {
        return _name;
    }

    virtual ~Henkilo() = default;
};

class Opiskelija : public Henkilo {
private:
    int _opiskelijanumero;

public:
    Opiskelija(const std::string& name, int student_id)
        : Henkilo(name), _opiskelijanumero(student_id) {
    }

    Opiskelija() : _opiskelijanumero(0) {}

    void set_student_id(int id) {
        _opiskelijanumero = id;
    }

    int get_student_id() const {
        return _opiskelijanumero;
    }

    void tulosta_tiedot() const {
        std::cout << "Nimi: " << get_name() << "\n";
        std::cout << "Opiskelijanumero: " << _opiskelijanumero << "\n";
    }
};

int main()
{
    Opiskelija Arska("Arska", 12345);
    Arska.tulosta_tiedot();

    return 0;
}
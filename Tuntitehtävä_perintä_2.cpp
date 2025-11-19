//Laadi Elain - luokka, joka on yliluokka ja jolle Kissa sekä Koira ovat siitä perittyjä aliluokkia.
//Kirjoita luokikien konstruktoreihin tulostuslauseet.Luo pääohjelmassa Elain, Kissa ja Koira.

#include <iostream>
#include <string>

class Elain {
private:
    std::string _name;

public:
    Elain(const std::string& name) : _name(name) {
        std::cout << "-> Elain-konstruktori suoritettu nimelle: " << name << "\n";
    }

    Elain() : _name("") {
        std::cout << "-> Elain-oletuskonstruktori suoritettu.\n";
    }

    void set_name(const std::string& name) { _name = name; }
    std::string get_name() const { return _name; }
    virtual ~Elain() = default;
};

class Koira : public Elain {
private:
    long long _omistajan_puhelinnumero;

public:
    Koira(const std::string& name, long long puhelinnumero)
        : Elain(name), _omistajan_puhelinnumero(puhelinnumero) {
        std::cout << "--> Koira-konstruktori suoritettu nimelle: " << name << "\n";
    }

    Koira() : _omistajan_puhelinnumero(0) {
        std::cout << "--> Koira-oletuskonstruktori suoritettu.\n";
    }

    void set_puhelinnumero(long long numero) { _omistajan_puhelinnumero = numero; }
    long long get_puhelinnumero() const { return _omistajan_puhelinnumero; }

    void tulosta_tiedot() const {
        std::cout << "  Nimi: " << get_name() << "\n";
        std::cout << "  Koiran omistajan puh.numero: " << _omistajan_puhelinnumero << "\n";
    }
};

class Kissa : public Elain {
private:
    long long _omistajan_puhelinnumero;

public:
    Kissa(const std::string& name, long long puhelinnumero)
        : Elain(name), _omistajan_puhelinnumero(puhelinnumero) {
        std::cout << "--> Kissa-konstruktori suoritettu nimelle: " << name << "\n";
    }

    Kissa() : _omistajan_puhelinnumero(0) {
        std::cout << "--> Kissa-oletuskonstruktori suoritettu.\n";
    }

    void set_puhelinnumero(long long numero) { _omistajan_puhelinnumero = numero; }
    long long get_puhelinnumero() const { return _omistajan_puhelinnumero; }

    void tulosta_tiedot() const {
        std::cout << "  Nimi: " << get_name() << "\n";
        std::cout << "  Kissan omistajan puh.numero: " << _omistajan_puhelinnumero << "\n";
    }
};

int main()
{
    std::cout << "### Eläimen tiedot ###\n";
    Elain NimetonElain("Nimetön Eläin");

    std::cout << "\n";
    std::cout << "\n### ### ###\n";
    std::cout << "\n";

    std::cout << "\n### Koiran tiedot ###\n";
    Koira Musti("Musti", 358401234567LL);

    std::cout << "--- Koira luotu ja tiedot ---\n";
    Musti.tulosta_tiedot();

    std::cout << "\n";
    std::cout << "\n### ### ###\n";
    std::cout << "\n";

    std::cout << "\n### Kissan tiedot ###\n";
    Kissa Karvinen("Karvinen", 358407654321LL);

    std::cout << "--- Kissa luotu ja tiedot ---\n";
    Karvinen.tulosta_tiedot();

    return 0;
}

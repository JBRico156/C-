//Määrittele luokkahierarkia, joka kuvaa erityyppisiä ajoneuvoja :
//CHECK!• Ajoneuvo on yliluokka.Jokaisella ajoneuvolla on huippunopeus, käyttöönottovuosi ja paino. CHECK!
// 
//• Autot ovat erityislaatuisia ajoneuvoja.Niistä tiedetään ovien ja renkaiden lukumäärä.
//• Autoja on edelleen kahta tyyppiä : henkilöautoja ja kuorma - autoja.Henkilöautoista tiedetään
//matkustajien maksimimäärä.Kuorma - autoista tiedetään kuorman maksimipaino.
// 
//CHECK!• Lentokoneet ovat ajoneuvoja, joilla on maksimilentokorkeus.CHECK!
// 
//CHECK!• Laivat ovat ajoneuvoja, joilla on maksimisyväys.CHECK!
// 
//Toteutusohjeita :
//	• Kirjoita koko luokkahierarkia yhteen header - tiedostoon
//	• Toteuta olioiden alustus alustuslistojen avulla
//	• Muita jäsenfunktioita kuin(parametrillisia) konstruktoreita ei tarvita
//	• Tee pääohjelma, joka luo instanssin kustakin luokasta
#include <iostream>
#include <string>

class Ajoneuvo {
private:
    std::string _name;
    int _huippunopeus;
    int _kayttoonottovuosi;
    int _paino;

public:
    Ajoneuvo(const std::string& name, int nopeus, int vuosi, int paino)
        : _name(name), _huippunopeus(nopeus), _kayttoonottovuosi(vuosi), _paino(paino) {
        std::cout << "-> Ajoneuvo-konstruktori suoritettu nimelle: " << name << "\n";
    }

    Ajoneuvo()
        : _name("Nimetön"), _huippunopeus(0), _kayttoonottovuosi(0), _paino(0) {
        std::cout << "-> Ajoneuvo-oletuskonstruktori suoritettu.\n";
    }

    void tulosta_perustiedot() const {
        std::cout << "    Nimi: " << _name << "\n";
        std::cout << "    Huippunopeus: " << _huippunopeus << " km/h\n";
        std::cout << "    Käyttöönottovuosi: " << _kayttoonottovuosi << "\n";
        std::cout << "    Paino: " << _paino << " kg\n";
    }

    virtual void tulosta_tiedot() const {
        tulosta_perustiedot();
    }

    virtual ~Ajoneuvo() = default;
};

class Auto : public Ajoneuvo {
private:
    int _ovien_lukumaara;
    int _renkaiden_lukumaara;

public:
    Auto(const std::string& name, int nopeus, int vuosi, int paino,
        int ovia, int renkaita)
        : Ajoneuvo(name, nopeus, vuosi, paino),
        _ovien_lukumaara(ovia), _renkaiden_lukumaara(renkaita) {
        std::cout << "--> Auto-konstruktori suoritettu nimelle: " << name << "\n";
    }

    virtual void tulosta_tiedot() const override {
        Ajoneuvo::tulosta_perustiedot();
        std::cout << "    Ovia: " << _ovien_lukumaara << "\n";
        std::cout << "    Renkaiden lukumäärä: " << _renkaiden_lukumaara << "\n";
    }

    Auto() : _ovien_lukumaara(0), _renkaiden_lukumaara(0) {
        std::cout << "--> Auto-oletuskonstruktori suoritettu.\n";
    }
};

class Henkiloauto : public Auto {
private:
    int _matkustajien_maksimimaara;

public:
    Henkiloauto(const std::string& name, int nopeus, int vuosi, int paino,
        int ovia, int renkaita, int max_matkustajat)
        : Auto(name, nopeus, vuosi, paino, ovia, renkaita),
        _matkustajien_maksimimaara(max_matkustajat) {
        std::cout << "---> Henkilöauto-konstruktori suoritettu nimelle: " << name << "\n";
    }

    void tulosta_tiedot() const override {
        Auto::tulosta_tiedot();
        std::cout << "    Matkustajien maksimimäärä: " << _matkustajien_maksimimaara << "\n";
    }
};

class KuormaAuto : public Auto {
private:
    int _kuorman_maksimipaino;

public:
    KuormaAuto(const std::string& name, int nopeus, int vuosi, int paino,
        int ovia, int renkaita, int max_kuorma)
        : Auto(name, nopeus, vuosi, paino, ovia, renkaita),
        _kuorman_maksimipaino(max_kuorma) {
        std::cout << "---> Kuorma-auto-konstruktori suoritettu nimelle: " << name << "\n";
    }

    void tulosta_tiedot() const override {
        Auto::tulosta_tiedot();
        std::cout << "    Kuorman maksimipaino: " << _kuorman_maksimipaino << " kg\n";
    }
};

class Lentokone : public Ajoneuvo {
private:
    int _maksimi_lentokorkeus;

public:
    Lentokone(const std::string& name, int nopeus, int vuosi, int paino, int maksimilentokorkeus)
        : Ajoneuvo(name, nopeus, vuosi, paino),
        _maksimi_lentokorkeus(maksimilentokorkeus) {
        std::cout << "--> Lentokone-konstruktori suoritettu nimelle: " << name << "\n";
    }

    void tulosta_tiedot() const override {
        Ajoneuvo::tulosta_perustiedot();
        std::cout << "    Maksimilentokorkeus: " << _maksimi_lentokorkeus << " metriä\n";
    }
};

class Laiva : public Ajoneuvo {
private:
    int _maksimi_syvays;

public:
    Laiva(const std::string& name, int nopeus, int vuosi, int paino, int maksimisyvays)
        : Ajoneuvo(name, nopeus, vuosi, paino),
        _maksimi_syvays(maksimisyvays) {
        std::cout << "--> Laiva-konstruktori suoritettu nimelle: " << name << "\n";
    }

    void tulosta_tiedot() const override {
        Ajoneuvo::tulosta_perustiedot();
        std::cout << "    Maksimisyväys: " << _maksimi_syvays << " metriä\n";
    }
};

int main()
{
    std::cout << "################################\n";
    std::cout << "### AJONEUVOHIERARKIAN LUONTI ###\n";
    std::cout << "################################\n";

    std::cout << "\n--- 1. YLILUOKKA: AJONEUVO ---\n";
    Ajoneuvo pyora("Polkupyörä", 30, 2024, 15);
    pyora.tulosta_tiedot();

    std::cout << "\n--- 2. LENTOKONE ---\n";
    Lentokone boeing("Boeing 747", 900, 2000, 180000, 14000);
    boeing.tulosta_tiedot();

    std::cout << "\n--- 3. LAIVA ---\n";
    Laiva siljaLine("Silja Line", 40, 1995, 20000, 10);
    siljaLine.tulosta_tiedot();

    std::cout << "\n--- 4. HENKILÖAUTO ---\n";
    Henkiloauto toyota("Toyota Corolla", 180, 2020, 1500, 4, 4, 5);
    toyota.tulosta_tiedot();

    std::cout << "\n--- 5. KUORMA-AUTO ---\n";
    KuormaAuto volvo("Volvo FH", 90, 2018, 8000, 2, 10, 30000);
    volvo.tulosta_tiedot();

    return 0;
}
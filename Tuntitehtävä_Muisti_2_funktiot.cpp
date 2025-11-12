//Laajenna edellistä ohjelmaa siten, että sinulla on kaksi eri tiedostoa(esim.main.cpp ja
//funktiot.cpp).Määrittele globaali muuttuja vain yhdessä tiedostossa, mutta käytä sitä
//molemmissa.Harjoittele extern - avainsanan käyttöä globaalin muuttujan kanssa.

#include <iostream>
using namespace std;

extern int x;

void tulosta_arvo()
{
    cout << "Arvo on: " << x << endl;
}

void muuta_arvo()
{
    x = x + 10;
}

int main()
{
    tulosta_arvo();
    muuta_arvo();
    tulosta_arvo();

    return 0;
}

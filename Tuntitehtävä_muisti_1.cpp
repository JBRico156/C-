//Tee ohjelma, jossa globaalia muuttujaa k‰ytet‰‰n useammassa eri funktiossa.Yhdess‰
//funktiossa muuttujan arvo muutetaan, toisessa funktiossa arvo tulostetaan.Kirjoita koko ohjelma
//yhteen tiedostoon.

#include <iostream>
using namespace std;

int x = 5;

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
    cout << "Anna luku: ";
    cin >> x;

    tulosta_arvo();
    muuta_arvo();

    return 0;
}
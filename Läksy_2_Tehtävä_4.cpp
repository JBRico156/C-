//Kirjoita funktio summaa, joka saa parametrina kaksi kokonaislukua ja n�iden summan
//a) osoittimina
//b) referenssein�
#include <iostream>
using namespace std;

void summaa_osoittimilla(const int* luku1, const int* luku2, int* tulos)
{
    *tulos = *luku1 + *luku2;
}

void summaa_referensseilla(const int& luku1, const int& luku2, int& tulos)
{
    tulos = luku1 + luku2;
}

int main()
{
    int a = 5;
    int b = 4;
    int summa1 = 0;
    int summa2 = 0;

    cout << "Ensimm�inen luku on: " << a << "\n";
    cout << "Toinen luku on: " << b << "\n";

    summaa_osoittimilla(&a, &b, &summa1);
    cout << "Summa osoittimilla: " << summa1 << "\n";

    summaa_referensseilla(a, b, summa2);
    cout << "Summa referensseill�: " << summa2 << "\n";

    return 0;
}

//Kirjoita ohjelma, joka laskee C - merkkijonon pituuden.C - merkkijono on char - taulukko, jonka
//�lopetusmerkkin� toimii erikoismerkki �\0�.Merkkijonon voi esitell� testausta varten esim.

//char mjono[] = �Hello�;

//Huomaa, ett� voit ajatella mjono - muuttujan olevan tyyppi� char*, ja ett� se osoittaa taulukon
//ensimm�iseen merkkiin(H).Lopetusmerkki vastaa nullptr - arvoa(eli NULL eli 0).
//Kirjoita toteutus em.mjono - osoittimen ja siihen kohdistetun osoitinaritmetiikan(++) avulla.�l� k�yt�
//taulukon indeksointia, �l�k� valmista strlen - funktiota.
#include <iostream>
using namespace std;

int main() {
    char mjono[] = "Hello";
    char* m = mjono;
    int pituus = 0;

    while (*m != '\0') {
        m++;
        pituus++;
    }

    cout << "Merkkijonon pituus on: " << pituus << " merkki�\n";
    return 0;
}









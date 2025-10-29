//Kirjoita ohjelma, joka laskee C - merkkijonon pituuden.C - merkkijono on char - taulukko, jonka
//”lopetusmerkkinä” toimii erikoismerkki ’\0’.Merkkijonon voi esitellä testausta varten esim.

//char mjono[] = ”Hello”;

//Huomaa, että voit ajatella mjono - muuttujan olevan tyyppiä char*, ja että se osoittaa taulukon
//ensimmäiseen merkkiin(H).Lopetusmerkki vastaa nullptr - arvoa(eli NULL eli 0).
//Kirjoita toteutus em.mjono - osoittimen ja siihen kohdistetun osoitinaritmetiikan(++) avulla.Älä käytä
//taulukon indeksointia, äläkä valmista strlen - funktiota.
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

    cout << "Merkkijonon pituus on: " << pituus << " merkkiä\n";
    return 0;
}









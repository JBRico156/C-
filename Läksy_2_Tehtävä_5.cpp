//Kirjoita funktio nollaa, joka saa parametrina osoittimen kokonaislukutaulukon alkuun, sek‰ taulukon
//alkioiden lukum‰‰r‰n(lis‰kysymys: miksi t‰m‰ toinenkin parametrina tarvitaan ? ).
//Funktio asettaa taulukon kaikkien alkioiden arvoksi 0. Luo p‰‰ohjelmassa taulukko, ja testaa, ett‰ funktio
//toimii oikein.
#include <iostream>
using namespace std;


void nollaa(int* taulukko, int pituus)
{
	for (int i = 0; i < pituus; i++)
	{
		taulukko[i] = 0;
	}
}

int main()
{
    int t[] = { 10, 20, 30, 40, 50 };
    int pituus = sizeof(t) / sizeof(t[0]);

    cout << "Alkuper‰inen taulukko: ";
    for (int i = 0; i < pituus; i++)
        cout << t[i] << " ";
    cout << "\n";

    nollaa(t, pituus);

    cout << "Nollauksen j‰lkeen: ";
    for (int i = 0; i < pituus; i++)
        cout << t[i] << " ";
    cout << "\n";

    return 0;
}

//LISƒKYSYMYS:
//taulukon nimi (t) muuttuu osoittimeksi (int*), eik‰ taulukon kokoa en‰‰ tiedet‰.
//sizeof(taulukko) palauttaisi vain osoittimen koon(esim. 8 tavua), ei alkioiden m‰‰r‰‰.
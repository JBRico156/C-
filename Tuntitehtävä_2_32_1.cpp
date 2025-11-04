//Laadi funktio
//int* varaa_taulukko(int n)
//joka varaa tilaa kokonaislukutaulukolle, johon mahtuu n alkiota.Funktio palauttaa kutsujalle osoittimen
//taulukon alkuun.Käytä new - operaatiota tilan varaukseen.

#include <iostream>
using namespace std;

int* varaa_taulukko(int n)
{
	int* table = new int[n];
	return table;
}

int main()
{
	int luku = 5;
    int* taulukko = varaa_taulukko(luku);

    delete[] taulukko;
    return 0;
}

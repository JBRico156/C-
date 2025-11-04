//Laadi funktio
//int* varaa_taulukko(int n)
//joka varaa tilaa kokonaislukutaulukolle, johon mahtuu n alkiota.Funktio palauttaa kutsujalle osoittimen
//taulukon alkuun.Käytä new - operaatiota tilan varaukseen.

//Laadi funktiot
//void lue_arvot(int* t, int n)
//joka lukee parametrina annettuun taulukkoon kokonaisluvut näppäimistöltä(n on taulukon koko).

#include <iostream>
using namespace std;

int* varaa_taulukko(int n)
{
    int* table = new int[n];
    return table;
}

void lue_arvot(int* t, int n)
{
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
}

int main()
{
    int luku = 5;
    int* taulukko = varaa_taulukko(luku);

    cout << "Anna " << luku << " kokonaislukua:\n";
    lue_arvot(taulukko, luku);

    cout << "Syottamasi luvut olivat:\n";
    for (int i = 0; i < luku; i++) {
        cout << taulukko[i] << " ";
    }
    cout << "\n";

    delete[] taulukko;
    return 0;
}

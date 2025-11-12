//Laadi funktio
//int* varaa_taulukko(int n)
//joka varaa tilaa kokonaislukutaulukolle, johon mahtuu n alkiota.Funktio palauttaa kutsujalle osoittimen
//taulukon alkuun.Käytä new - operaatiota tilan varaukseen.

//Laadi funktiot
//void lue_arvot(int* t, int n)
//joka lukee parametrina annettuun taulukkoon kokonaisluvut näppäimistöltä(n on taulukon koko).

//Laadi funktio
//void kaanna(int* t, int n)
//joka kääntää taulukossa olevat luvut päinvastaiseen järjestykseen(n on taulukon koko).

//Laadi funktio
//void tulosta_arvot(const int* t, int n)
//joka tulostaa näytölle taulukon arvot(n on taulukon koko).Parametrilistan const - määreeseen palataan tunnilla.

//Laadi pääohjelma, joka kysyy käyttäjältä kokonaislukutaulukon koon, sen jälkeen lukee näppäimistöltä
//arvot taulukkoon, kääntää taulukon luvut päinvastaiseen järjestykseen ja lopulta tulostaa taulukon
//näytölle.Ohjelman lopussa tulee vapauttaa aikaisemmin varattu taulukon muistialue(delete).
//Ohjelman tulee hyödyntää tehtävissä 1 - 4 rakennettuja funktioita.

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

void kaanna(int* t, int n)
{
    for (int i = 0; i < n / 2; i++) {
        int temp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = temp;
    }
}

void tulosta_arvot(const int* t, int n)
{
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int luku;

    cout << "Anna taulukon koko: ";
    cin >> luku;

    int* taulukko = varaa_taulukko(luku);

    cout << "Anna " << luku << " kokonaislukua:\n";
    lue_arvot(taulukko, luku);

    cout << "Syottamasi luvut olivat:\n";
    tulosta_arvot(taulukko, luku);

    kaanna(taulukko, luku);

    cout << "Kaannetyt luvut:\n";
    tulosta_arvot(taulukko, luku);

    delete[] taulukko;
    return 0;
}

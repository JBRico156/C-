//Kirjoita funktio, joka vastaanottaa osoittimen dynaamiseen taulukkoon ja sen koon.Funktio
//laskee ja palauttaa taulukon lukujen summan.
#include <iostream>
using namespace std;

int lista_summa(const int* t, int luku)
{
    int summa = 0;
    for (int i = 0; i < luku; i++)
    {
        summa += t[i];
    }
    return summa;
}

int main()
{
    int luku;
    cout << "Anna taulukon koko: ";
    cin >> luku;

    int* t = new int[luku];

    for (int i = 0; i < luku; i++)
    {
        t[i] = i + 1;
    }

    cout << "Taulukon sisältö: ";
    for (int i = 0; i < luku; i++)
    {
        cout << t[i] << " ";
    }
    cout << "\n";

    int summa = lista_summa(t, luku);
    cout << "Taulukon lukujen summa on: " << summa << " ";

    delete[] t;

    return 0;
}

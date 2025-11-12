//Kirjoita ohjelma, joka varaa taulukon kokonaislukuja käyttäjän syöttämän koon mukaan
//dynaamisesti(heapistä) ja täyttää taulukon arvoilla.Tulosta taulukon sisältö ja muista vapauttaa
//muisti lopuksi.
#include <iostream>
using namespace std;

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

    delete[] t;

    return 0;
}
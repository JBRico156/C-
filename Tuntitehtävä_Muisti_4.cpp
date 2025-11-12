//Tee ohjelma, jossa kokeilet funktioiden ketjutettua kutsumista: main kutsuu funktioA:n, joka
//kutsuu funktioB : n, joka kutsuu funktioC : n.Käytä debuggeria, ja pysäytä suoritus funktioC : ssä —
//tarkastele kutsupino - näkymästä, miten ohjelman suorituspolku etenee.
#include <iostream>
using namespace std;

void funktioC()
{
    cout << "funktioC\n";
    int x = 50;
    cout << "muuttuja = " << x << endl;
}

void funktioB()
{
    cout << "funktioB kutsuu funktioC:tä\n";
    funktioC();
}

void funktioA()
{
    cout << "funktioA kutsuu funktioB:tä\n";
    funktioB();
}

int main()
{
    cout << "main kutsuu funktioA:ta\n";
    funktioA();
    cout << "main jatkaa suoritusta\n";
    return 0;
}
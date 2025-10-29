//Kirjoita funktio, joka ottaa parametrinaan osoittimen kokonaislukuun ja moninkertaistaa arvon
//kahdella.Kirjoita testipääohjelma.

#include <iostream>
#include <string>

void Tuplaaja(int* luku)
	{
		*luku *= 2;
	}

int main()
{
	int luku = 2;
	Tuplaaja(&luku);
	cout << luku << "\n";
}


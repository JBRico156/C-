//Kirjoita while - toistorakennetta k�ytt�v� ohjelma, joka tulostaa kolmella jaolliset luvut v�lilt� 1..1000.
#include <iostream>
#include <string>

int main()
{
	int i = 0;
	while (i < 1000) 
	{
		if (i % 3 == 0)
			std::cout << i << "\n";
		i++;
	}
}

//Laadi ohjelma, jossa on kokonaislukutyyppinen muuttuja x, ja osoitintyyppinen muuttuja y, joka osoittaa
//x : ‰‰n.Tulosta t‰m‰n j‰lkeen ruudulle :
//-molempien muuttujien osoite muistissa
//-molempien muuttujien arvo
//Piirr‰ havainnollistava kuva keskusmuistista t‰ss‰ tilanteessa.Etsi tarvittaessa lis‰tietoa tulostuksen
//tekemiseen. 

#include <iostream>
using namespace std;

int main() {
	int x = 5;
	int* y;
	y = &x;
	y += 1;

	std::cout << "Muuttujan x osoite: " << &x << std::endl;
	std::cout << "Muuttujan y osoite: " << y << std::endl;
	std::cout << "Muuttujan x arvo: " << x << std::endl;
	std::cout << "Muuttujan y arvo: " << *y << std::endl;

	return 0;
}
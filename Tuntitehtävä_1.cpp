//Luo kokonaisluku (int) -muuttuja ja osoitin, joka osoittaa kyseiseen muuttujaan. Tulosta muuttujan arvo
//sekä suoraan että osoittimen avulla.

#include <iostream>
#include <string>


int main() {
	int x = 5;
	int* y;
	y = &x;

	std::cout << "Muuttujan arvo: " << x << std::endl;
	std::cout << "Muuttujan arvo osoittimen kautta: " << *y << std::endl;

	return 0;
}












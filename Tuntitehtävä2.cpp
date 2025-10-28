//Luo liukulukumuuttuja (double) ja osoitin siihen. Muuta muuttujan arvoa osoittimen avulla ja tulosta
//muuttujan arvo ennen ja jälkeen muutoksen.

#include <iostream>
#include <string>

int main() {
	double x = 5;
	double* y;
	y = &x;

	std::cout << "Muuttujan arvo: " << x << std::endl;

	double** z = &y;
	**z = 10;

	std::cout << "Muuttujan arvo osoittimen muutoksen kautta: " << x << std::endl;

	return 0;
}
#include <iostream>
using namespace std;

int main() 
{
	int x = 100;

	int* y = &x; //y osoittaa x:ään
	int** z = &y; // z osoittaa y:hyn

	**z = 200; // muuttaa x:n arvon
	cout << x << "\n";
}

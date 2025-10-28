#include <iostream>
using namespace std;

int main()
{
	int* p = nullptr;

	if (p == nullptr) 
	{
		cout << "Älä käytä tätä!\n";
	}
	else
	{
		cout << "Tätä voi käyttää.\n";
	}
	return 0;
}
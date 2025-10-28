//M‰‰rittele taulukko, jossa on viisi kokonaislukua. K‰yt‰ osoitinaritmetiikkaa (eli osoittimia ja ++
//operaattoria), jotta voit tulostaa jokaisen taulukon alkion arvon.

#include <iostream>
#include <string>

int main() {

	int t[5] = { 12, 34, 22, 67, 23 };

	int* p = t;
	//int* p = &t[0];
	int i = 0;
	while (i < 5) 
	{
		cout << *p << "\n";
		i++;
		p++;
	}

	return 0;
}

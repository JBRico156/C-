#include <iostream>
#include <string>
#include <sstream>

class Car
{
private:
	std::string _brand;
	int _year = 0;


public:

	void set_brand(const std::string& brand)
	{
		_brand = brand;
	}
	void set_year(int year)
	{
		_year = year;
	}
	const std::string& get_brand() const
	{
		return _brand;
	}
	int get_year() const
	{
		return _year;
	}
};


int main()
{
	Car Toyota;

	Toyota.set_brand("Romu");
	Toyota.set_year(2000);

	std::cout << "Merkki: " << Toyota.get_brand() << std::endl;
	std::cout << "Vuosi: " << Toyota.get_year() << std::endl;

	return 0;
}
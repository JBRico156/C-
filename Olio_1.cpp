#include <iostream>
#include <string>
#include <sstream>

class Car
{
private:
	std::string _rekisteritunnus;
	int _nopeus = 0;
	int _huippunopeus = 0;
	int _kuljettu_matka = 0;

public:

	void set_rekisteritunnus(const std::string& rekisteritunnus)
	{
		_rekisteritunnus = rekisteritunnus;
	}
	void set_nopeus(int nopeus)
	{
		_nopeus = nopeus;
	}
	void set_huippunopeus(int huippunopeus)
	{
		_huippunopeus = huippunopeus;
	}
	void set_kuljettu_matka(int kuljettu_matka)
	{
		_kuljettu_matka = kuljettu_matka;
	}



	const std::string& get_rekisteritunnus() const
	{
		return _rekisteritunnus;
	}
	int get_nopeus() const
	{
		return _nopeus;
	}
	int get_huippunopeus() const
	{
		return _huippunopeus;
	}
	int get_kuljettu_matka() const
	{
		return _kuljettu_matka;
	}
};


int main()
{
	Car Toyota;

	Toyota.set_rekisteritunnus("ABC-123");
	Toyota.set_nopeus(0);
	Toyota.set_huippunopeus(142);
	Toyota.set_kuljettu_matka(0);


	std::cout << "Rekisteritunnus: " << Toyota.get_rekisteritunnus() << std::endl;
	std::cout << "Nopeus(km/h): " << Toyota.get_nopeus() << std::endl;
	std::cout << "Huippunopeus(km/h): " << Toyota.get_huippunopeus() << std::endl;
	std::cout << "Kuljettu matka(km): " << Toyota.get_kuljettu_matka() << std::endl;

	return 0;
}

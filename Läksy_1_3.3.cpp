//Kirjoita ohjelma, joka kysyy käyttäjän biologisen sukupuolen ja hemoglobiiniarvon(g / l).
//Ohjelma ilmoittaa, onko hemoglobiiniarvo alhainen, normaali vai korkea.

//Naisen normaali hemoglobiiniarvo on välillä 117 - 175 g / l.
//Miehen normaali hemoglobiiniarvo on välillä 134 - 195 g / l.

#include <iostream>
#include <string>

int main()
{
    int hemog;
    std::string sukupuoli;

    std::cout << "Kerro biologinen sukupuolesi (mies/nainen): ";
    std::cin >> sukupuoli;

    std::cout << "Anna hemoglobiiniarvosi (g/l): ";
    std::cin >> hemog;

    if (sukupuoli == "nainen")
    {
        if (hemog < 117)
            std::cout << "Hemoglobiiniarvo on matala.\n";
        else if (hemog <= 175)
            std::cout << "Hemoglobiiniarvo on normaali.\n";
        else
            std::cout << "Hemoglobiiniarvo on korkea.\n";
    }
    else if (sukupuoli == "mies")
    {
        if (hemog < 134)
            std::cout << "Hemoglobiiniarvo on matala.\n";
        else if (hemog <= 195)
            std::cout << "Hemoglobiiniarvo on normaali.\n";
        else
            std::cout << "Hemoglobiiniarvo on korkea.\n";
    }
    else
    {
        std::cout << "Virheellinen sukupuoli. Kirjoita 'mies' tai 'nainen'.\n";
    }

    return 0;
}

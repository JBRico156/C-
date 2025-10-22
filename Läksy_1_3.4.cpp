//Kirjoita ohjelma, joka kysyy vuosiluvun ja ilmoittaa, onko annettu vuosi karkausvuosi.
//Vuosi on karkausvuosi, jos se on jaollinen nelj�ll�.
//Sadalla jaolliset vuodet ovat karkausvuosia vain jos ne ovat jaollisia my�s nelj�ll�sadalla.

#include <iostream>
#include <string>

int main()
{
    int vuosi;

    std::cout << "Anna vuosiluku: ";
    std::cin >> vuosi;


    if ((vuosi % 400 == 0) || (vuosi % 4 == 0 && vuosi % 100 != 0))
    {
        std::cout << "Vuosi on karkausvuosi.\n";
    }
    else
    {
        std::cout << "Vuosi ei ole karkausvuosi.\n";
    }
    return 0;
}

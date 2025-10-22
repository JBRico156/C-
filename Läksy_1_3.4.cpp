//Kirjoita ohjelma, joka kysyy vuosiluvun ja ilmoittaa, onko annettu vuosi karkausvuosi.
//Vuosi on karkausvuosi, jos se on jaollinen neljällä.
//Sadalla jaolliset vuodet ovat karkausvuosia vain jos ne ovat jaollisia myös neljälläsadalla.

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

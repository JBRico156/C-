//Kirjoita funktio, joka saa parametrinaan bensiinin määrän Yhdysvaltain nestegallonoina ja palauttaa
//paluuarvonaan vastaavan litramäärän.Kirjoita pääohjelma, joka kysyy gallonamäärän käyttäjältä ja muuntaa sen litroiksi.
//Muunnos on tehtävä aliohjelmaa hyödyntäen.Muuntamista jatketaan siihen saakka, kunnes käyttäjä syöttää negatiivisen gallonamäärän.

//Yksi gallona on 3, 785 litraa.
#include <iostream>

int main()
{
    double gallona = 0;
    const double gallonalitra = 3.785;

    while (true)
    {
        std::cout << "Anna gallona määrä, joka muutetaan lirtoiksi(negatiivinen luku pysäyttää ohjelman): ";
        std::cin >> gallona;

        if (gallona < 0)
        {
            std::cout << "Kiitos ja näkemiin!" << std::endl;
            break;
        }

        std::cout << gallona << " gallonaa on " << gallona * gallonalitra << " litraa." << std::endl;
    }

    return 0;
}

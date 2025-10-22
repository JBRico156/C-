//Kirjoita funktio, joka saa parametrinaan bensiinin m‰‰r‰n Yhdysvaltain nestegallonoina ja palauttaa
//paluuarvonaan vastaavan litram‰‰r‰n.Kirjoita p‰‰ohjelma, joka kysyy gallonam‰‰r‰n k‰ytt‰j‰lt‰ ja muuntaa sen litroiksi.
//Muunnos on teht‰v‰ aliohjelmaa hyˆdynt‰en.Muuntamista jatketaan siihen saakka, kunnes k‰ytt‰j‰ syˆtt‰‰ negatiivisen gallonam‰‰r‰n.

//Yksi gallona on 3, 785 litraa.
#include <iostream>

int main()
{
    double gallona = 0;
    const double gallonalitra = 3.785;

    while (true)
    {
        std::cout << "Anna gallona m‰‰r‰, joka muutetaan lirtoiksi(negatiivinen luku pys‰ytt‰‰ ohjelman): ";
        std::cin >> gallona;

        if (gallona < 0)
        {
            std::cout << "Kiitos ja n‰kemiin!" << std::endl;
            break;
        }

        std::cout << gallona << " gallonaa on " << gallona * gallonalitra << " litraa." << std::endl;
    }

    return 0;
}
kemiin!")
            */
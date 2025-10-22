//Kirjoita ohjelma, joka muuntaa tuumia senttimetreiksi niin kauan kunnes k‰ytt‰j‰ antaa negatiivisen tuumam‰‰r‰n.
//Sen j‰lkeen ohjelma lopettaa toimintansa. 1 tuuma = 2, 54 cm
#include <iostream>

int main()
{
    double syote = 0;
    const double cm = 2.54;

    while (true)
    {
        std::cout << "Anna tuumam‰‰r‰ (negatiivinen luku lopettaa ohjelman): ";
        std::cin >> syote;

        if (syote < 0)
        {
            std::cout << "Kiitos ja n‰kemiin!" << std::endl;
            break;
        }

        std::cout << syote << " tuumaa on " << syote * cm << " senttimetri‰." << std::endl;
    }

    return 0;
}

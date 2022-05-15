//
// Created by maxim on 09/05/2022.
//
#include <iostream>
#include "../Header/Exercice1.h"
#include "Gestion_Erreur.h"
#include "../Exercice2/inc/PFormeGeometrique/Exercice2.h"


void Menu() {
    int choix;
    do {
        std::cout << "----------- Menu ------------" << std::endl;
        std::cout << "1. Exercice 1" << std::endl;
        std::cout << "2. Exercice 2" << std::endl;
        std::cout << "3. Quitter" << std::endl;
        std::cout <<"Entrez votre choix (1 a 3)  :" << std::endl;
        choix  = isANumber2(choix) ;
        switch (choix) {
            case 1:
                TP5_C::Exercice1();
                break;
            case 2:
                PFormeGeometrique::ex2();
                break;
            case 3:
                break;
            default :
                std::cout << "Choix invalide" << std::endl;
        }
    } while (choix != 3);

}

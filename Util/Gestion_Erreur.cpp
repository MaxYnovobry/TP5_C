//
// Created by maxim on 09/05/2022.
//


#include <iostream>
#include "Gestion_Erreur.h"
#include "limits"

// Write a program that can see if the input is a number or not

// a program that can see if the input is an integer or not, if it is, it can be positive or negative and return the number

int isANumber2(int nombre) {
    std::cin >> nombre;
    if (std::cin.fail()) {
        std::cout << "Erreur de saisie" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return isANumber2(nombre);
    } else {
        return nombre;
    }
    return nombre;
}
//
// Created by Admin on 15/05/2022.
//
#include <iostream>
#include <string>
#include "../inc/PFormeGeometrique/Carre.h"


    namespace PFormeGeometrique {

        void Carre::affichage() const{
            std::cout << longueur << std::endl;
            std::cout << "Le périmètre est de " << perimetre() << std::endl;
            std::cout << "Surface" << surface() << std::endl;
        }
    }
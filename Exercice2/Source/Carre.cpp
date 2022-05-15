//
// Created by Admin on 15/05/2022.
//
#include <iostream>
#include <string>
#include "../inc/PFormeGeometrique/Carre.h"


    namespace PFormeGeometrique {
        Carre::Carre(std::string, double cote) {
            this-> cote = cote;
            std::cout << "Constructeur Carre" << std::endl;
        }
        void Carre::afficher() const{
            std::cout << cote << std::endl;
        }
    }
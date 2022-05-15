//
// Created by Admin on 15/05/2022.
//
#include <string>
#include "../inc/PFormeGeometrique/Rectangle.h"


    namespace PFormeGeometrique {

        void Rectangle::affichage() const {
            std::cout << "Rectangle de longueur " << a_longueur << " et de largeur " << a_largeur << std::endl;
            std::cout << "Le périmètre est de " << perimetre() << std::endl;
            std::cout << "Surface " << surface() << std::endl;
        }

         double Rectangle::perimetre() const {
            return (2 * a_largeur) + (2 * a_longueur);
         }

         double Rectangle::surface() const {
             return a_largeur * a_longueur;
         }
    }

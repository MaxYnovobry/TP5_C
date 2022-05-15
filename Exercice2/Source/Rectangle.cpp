//
// Created by Admin on 15/05/2022.
//
#include <string>
#include "../inc/PFormeGeometrique/Rectangle.h"


    namespace PFormeGeometrique {
        Rectangle::Rectangle(std::string, double largeur, double longueur) {;
            this->a_largeur = largeur;
            this->a_longueur = longueur;
        }
         double Rectangle::perimetre() const {
            return (2 * a_largeur) + (2 * a_longueur);
         }

         void Rectangle::affichage() const {
             std::cout << "Rectangle de longueur " << a_longueur << " et de largeur " << a_largeur << std::endl;
         }
         double Rectangle::surface() const {
             return a_largeur * a_longueur;
         }
    }

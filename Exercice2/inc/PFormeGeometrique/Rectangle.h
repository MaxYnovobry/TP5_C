//
// Created by Admin on 15/05/2022.
//

#ifndef TP5_C_RECTANGLE_H
#define TP5_C_RECTANGLE_H
#include <string>
#include <iostream>
#include "AFormeGeometrique.h"

#endif //TP5_C_RECTANGLE_H


    namespace PFormeGeometrique {
        class Rectangle : public AFormeGeometrique {
        private:
            double a_longueur;
            double a_largeur;
        public :
            Rectangle(const std::string &nom, double longueur, double largeur) : AFormeGeometrique(nom), a_longueur(longueur), a_largeur(largeur) {}
            double perimetre() const;

            void affichage() const;
            double surface() const;
        };
    }
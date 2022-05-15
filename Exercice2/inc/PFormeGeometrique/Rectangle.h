//
// Created by Admin on 15/05/2022.
//

#ifndef TP5_C_RECTANGLE_H
#define TP5_C_RECTANGLE_H
#include <string>
#include <iostream>
#endif //TP5_C_RECTANGLE_H


    namespace PFormeGeometrique {
        class Rectangle {
        private:
            double a_longueur;
            double a_largeur;
        public :
            Rectangle(std::string nom, double longueur, double largeur);
            double perimetre() const;
            void affichage() const;
            double surface() const;
        };
    }
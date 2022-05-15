//
// Created by Admin on 15/05/2022.
//

#ifndef TP5_C_CARRE_H
#define TP5_C_CARRE_H

#endif //TP5_C_CARRE_H
#include <string>
#include <iostream>
#include "Rectangle.h"


namespace PFormeGeometrique {
        class Carre : public Rectangle {
                public:
                    Carre(const std::string &nom , double longueur) : PFormeGeometrique::Rectangle(nom, longueur, longueur) {}
                    void affichage() const;
            };
    }

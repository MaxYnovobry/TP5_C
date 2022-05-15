//
// Created by maxim on 15/05/2022.
//

#include <iostream>
#include <string>
#include "../inc/PFormeGeometrique/AFormeGeometrique.h"

namespace PFormeGeometrique {

    AFormeGeometrique::AFormeGeometrique(std::string nom) {
        this->nom = nom;
    }

    std::string AFormeGeometrique::getnom() {
        return nom;
    }
}
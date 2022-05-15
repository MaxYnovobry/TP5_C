//
// Created by maxim on 15/05/2022.
//

#ifndef TP5_C_IFORMEGEOMETRIQUE_H
#define TP5_C_IFORMEGEOMETRIQUE_H

#include <string>
#include  "../Util/debug.h"

namespace PFormeGeometrique {
    class IFormeGeometrique {
    public:
        virtual double perimetre() const = 0;
        virtual void affichage() const = 0;
        virtual std::string getNom() const = 0;
        virtual double surface() const = 0;
        virtual ~IFormeGeometrique() { DEBUG(" ~IFormeGeometrique() "); }
    };
}

#endif //TP5_C_IFORMEGEOMETRIQUE_H

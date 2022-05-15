//
// Created by maxim on 15/05/2022.
//

#ifndef TP5_C_AFORMEGEOMETRIQUE_H
#define TP5_C_AFORMEGEOMETRIQUE_H

#include <string>
#include "IFormeGeometrique.h"

namespace PFormeGeometrique {

    class AFormeGeometrique : public IFormeGeometrique {
    private:
        std::string nom;

    public:
        AFormeGeometrique(std::string nom) : nom(nom) {};
        std::string getNom() const;
    };

};
;


#endif //TP5_C_AFORMEGEOMETRIQUE_H

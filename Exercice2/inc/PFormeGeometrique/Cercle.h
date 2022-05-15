//
// Created by maxim on 15/05/2022.
//

#ifndef TP5_C_CERCLE_H
#define TP5_C_CERCLE_H

#include <string>
#include "AFormeGeometrique.h"

namespace PFormeGeometrique {

    class Cercle : public AFormeGeometrique {
    private:
        double rayon;

    public:

        Cercle(const std::string &nom,double rayon) : AFormeGeometrique(nom),rayon(rayon) {};

        double perimetre() const;

        void affichage() const;

        double surface() const;
    };

    };
;




#endif //TP5_C_CERCLE_H

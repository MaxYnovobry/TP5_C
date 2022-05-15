//
// Created by maxim on 15/05/2022.
//

#ifndef TP5_C_CERCLE_H
#define TP5_C_CERCLE_H

#include <string>

namespace PFormeGeometrique {

    class Cercle {
    private:
        double rayon;

    public:
        Cercle(std::string nom,double rayon);

        double Perimetre();

        void afficher() const;

        double surface();
    };

    };
;








}

#endif //TP5_C_CERCLE_H

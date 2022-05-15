//
// Created by Admin on 15/05/2022.
//

#ifndef TP5_C_CARRE_H
#define TP5_C_CARRE_H

#endif //TP5_C_CARRE_H
#include <string>
#include <iostream>


    namespace PFormeGeometrique {
            class Carre {
                private:
                    double cote;
                public:
                    Carre(std::string , double _cote);
                    void afficher() const;
            };
    }

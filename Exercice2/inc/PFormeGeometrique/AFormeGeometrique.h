//
// Created by maxim on 15/05/2022.
//

#ifndef TP5_C_AFORMEGEOMETRIQUE_H
#define TP5_C_AFORMEGEOMETRIQUE_H

#include <string>

namespace PFormeGeometrique {

    class AFormeGeometrique {
    private:
        std::string nom;

    public:
        AFormeGeometrique(std::string nom);
        std::string getnom();
    };

};
;


#endif //TP5_C_AFORMEGEOMETRIQUE_H

//
// Created by maxim on 15/05/2022.
//

#include <iostream>
#include <string>
#include "../inc/PFormeGeometrique/Cercle.h"


namespace PFormeGeometrique {

    double Cercle::perimetre() const{
        return 2*3.14*rayon;
    }

    void Cercle::affichage() const{
        std::cout << "Cercle de diamètre " << rayon * 2 << '\n';
        std::cout << "Le Périmètre est de" << perimetre() << '\n';
        std::cout << "Surface " << surface() << '\n';
    }

    double Cercle::surface() const{
        return 3.14*rayon*rayon;
    }


}

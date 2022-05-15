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
        std::cout << "Cercle de diametre : " << rayon * 2 << '\n';
        std::cout << "Le Perimetre du Cercle est de : " << perimetre() << '\n';
        std::cout << "Surface du Cercle est de : " << surface() << '\n';
    }

    double Cercle::surface() const{
        return 3.14*rayon*rayon;
    }


}

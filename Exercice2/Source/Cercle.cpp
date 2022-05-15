//
// Created by maxim on 15/05/2022.
//

#include <iostream>
#include <string>
#include "../inc/PFormeGeometrique/Cercle.h"


namespace PFormeGeometrique {

    Cercle::Cercle(std::string nom, double rayon){
        this->nom = nom;
        this->rayon = rayon;
    }

    double Cercle::Perimetre(){
        return 2*3.14*rayon;
    }

    void Cercle::afficher() const{
        std::cout << "Cercle de rayon " << rayon << std::endl;
    }

    double Cercle::surface(){
        return 3.14*rayon*rayon;
    }


}

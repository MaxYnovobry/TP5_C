//
// Created by maxim on 15/05/2022.
//

#include "../inc/PFormeGeometrique/AFormeGeometrique.h"
#include "../inc/PFormeGeometrique/Cercle.h"
#include "../inc/PFormeGeometrique/Carre.h"
#include "../inc/PFormeGeometrique/Exercice2.h"


void PFormeGeometrique::ex2() {
    PFormeGeometrique::Cercle c("C10", 10.0);
    c.affichage();
    c.perimetre();
    c.surface();

    PFormeGeometrique::Rectangle r("R10", 10., 5.0);
    r.affichage();
    r.perimetre();
    r.surface();

    PFormeGeometrique::Carre ca( "CA10", 10.0);
    ca.affichage();
    ca.perimetre();
    ca.surface();

    PFormeGeometrique::IFormeGeometrique *f = new Carre("CARR002", 12);
    f->affichage();
    delete f;
    *&f = nullptr;

    PFormeGeometrique::IFormeGeometrique &f2 = ca;
    f2.affichage();
}
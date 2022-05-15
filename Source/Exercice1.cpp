//
// Created by maxim on 15/05/2022.
//

#include "../Header/Exercice1.h"
#include "../Header/Personne.h"

using namespace std;
namespace TP5_C {
    void Exercice1() {
        std::cout << "----------- Exercice3 ------------" << std::endl;
        TP5_C::Personne p1;
        p1.Initialiser("Maxim", 6'25'47'16'49ULL, TP5_C::MASCULIN);
        p1.Afficher();
        cout << "Le nom est " << p1.getNom() << endl;
        cout << "Le sexe est " << p1.getSexe()<< endl;
        cout << " Le numero est " << "0" << p1.getNumero()<< endl;

    }
}

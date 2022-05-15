//
// Created by maxim on 15/05/2022.
//

#ifndef TP5_C_PERSONNE_H
#define TP5_C_PERSONNE_H
#include <iostream>
#include <string>
#include <vector>
#include "../Header/Exercice1.h"

namespace TP5_C {
    enum Sexe {

        INCONNUE=0,

        MASCULIN=1,

        FEMININ=2
    };

    class Personne {
    private:
        std::string a_nom; // The person's name
        int a_numero; // The person's number
        Sexe a_sexe; // The person's

    public:

        Personne();
        ~Personne();

        void Initialiser(const std::string &nom, const int &numero , const Sexe &sexe) ;

        void Afficher() const;

        std::string afficherType(const TP5_C::Sexe &sexe) const;

        const std::string &getNom() const;

        std::basic_string<char> getSexe() const;

        const int &getNumero() const;
    };
    class  Etudiant : public Personne {
    private:
        std::vector<float> notes;

    public  :
        using Personne::Personne;
        void rentrerNote(float note);

        float getMoyenne() const;
        float maxNotes() const;
        float minNotes() const;
        void afficherNotes() const;
    };

};
;
#endif //TP5_C_PERSONNE_H



//
// Created by maxim on 15/05/2022.
//


#include <iostream>
#include <string>
#include "../Header/Exercice1.h"
#include "../Header/Personne.h"



namespace TP5_C {
    Personne::Personne() {
        std::cout << "Create a person" << std::endl;
    }

    Personne::~Personne() {
        std::cout << "destroy a person" << std::endl;
    }

    void Personne::Initialiser(const std::string &nom, const int &numero, const TP5_C::Sexe &sexe) {
        this->a_nom = nom;
        this->a_numero = numero;
        this->a_sexe = sexe;
    }

    void Personne::Afficher() const {
        std::cout << "Nom : " << this->a_nom << std::endl;
        std::cout << "Numero : " << "0" << this->a_numero << std::endl;
        std::cout << "Sexe : " << afficherType(a_sexe) << std::endl;
    }


    std::string TP5_C::Personne::afficherType(const TP5_C::Sexe &sexe) const { // Affiche le type de la carte
        switch (this->a_sexe) {
            case INCONNUE:
                std::cout << "Inconnue" << std::endl;
                break;
            case MASCULIN:
                std::cout << "Masculin" << std::endl;
                break;
            case FEMININ:
                std::cout << "Feminin" << std::endl;
                break;
        }
        return "";
    }

    // recuperer le nom de la personne
    const std::string &Personne::getNom() const {
        return this->a_nom;
    }

    std::basic_string<char> Personne::getSexe() const {
        return this->afficherType(a_sexe);
    }

    const int &Personne::getNumero() const {
        return this->a_numero;
    }

    //Create a method that enter a score

}


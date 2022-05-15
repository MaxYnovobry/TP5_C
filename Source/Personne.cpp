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

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void Etudiant::afficherNotes() const {
        // Afficher toutes les notes
        std::cout << "Les notes de l'etudiant sont : " << getallNotes() << std::endl;
        std::cout << "La moyenne est de : " << getMoyenne()  << std::endl;
        std::cout << "La note minimale est de : " << minNotes() << std::endl;
        std::cout << "La note maximale est de : " << maxNotes() << std::endl;
    }


    float Etudiant::getMoyenne() const {
        float somme = 0;
        for (int i = 0; i < notes.size(); i++) {
            somme += notes[i];
        }
        return somme / notes.size();
    }

    float Etudiant::maxNotes() const{
        float max = 0;
        for (int i = 0; i < notes.size(); i++) {
            if (notes[i] > max) {
                max = notes[i];
            }
        }
        return max;
    }

    float Etudiant::minNotes() const {
        float min = notes[0];
        for (int i = 0; i < notes.size(); i++) {
            if (notes[i] < min) {
                min = notes[i];
            }
        }
        return min;
    };

    void Etudiant::rentrerNote(float note ) {
        if (note < 0 || note > 20) {
            std::cout << "La note " << note << " n'est pas comprise entre 0 et 20. Elle ne sera donc pas prise en compte." << std::endl;
        } else {
            notes.push_back(note);
        }
    }


        std::string Etudiant::getallNotes() const {
            std::string allNotes = "";
            for (int i = 0; i < notes.size(); i++) {
                allNotes += std::to_string(notes[i]) + " ,  ";
            }
            return allNotes;
        }

}


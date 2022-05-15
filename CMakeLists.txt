cmake_minimum_required(VERSION 3.21)
project(TP5_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(Header)

add_executable(TP5_C
        main.cpp Source/Exercice1.cpp Header/Exercice1.h Header/Personne.h Source/Personne.cpp Util/menu.cpp Util/menu.h Util/Gestion_Erreur.cpp Util/Gestion_Erreur.h
        Exercice2/Source/Carre.cpp Exercice2/Source/Rectangle.cpp Exercice2/Source/Cercle.cpp Exercice2/Source/Exercice2.cpp Exercice2/Source/AFormeGeometrique.cpp
        Exercice2/inc/PFormeGeometrique/Carre.h Exercice2/inc/PFormeGeometrique/Rectangle.h Exercice2/inc/PFormeGeometrique/Cercle.h Exercice2/inc/PFormeGeometrique/AFormeGeometrique.h
        Exercice2/inc/PFormeGeometrique/IFormeGeometrique.h)


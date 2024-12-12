// Nom : carre

#include <iostream>
#include <stdio.h>
#include "carre.h"

using namespace std;
// main
int main() 
{
    CCarre tableau[4] = 
    {
        CCarre(0, 0, 10), 
        CCarre(10, 10, 15),
        CCarre(20, 20, 20),
        CCarre(30, 30, 25)
    };

    cout << "Tableau de 4 carres :\n" << std::endl;
    for (int i = 0; i < 4; ++i) 
    {
        cout << "Carre " << i + 1 << " : " << std::endl;
        tableau[i].Afficher();
        cout << std::endl;
    }

    cout << "Creation d'un carre en memoire dynamique : " << std::endl;
    CCarre* carreDynamique = new CCarre(40, 40, 30);

    carreDynamique->Afficher();

    carreDynamique->Setsx(50);
    carreDynamique->Setsy(50);
    carreDynamique->Setcote(35);

    cout << "\nCaracteristiques modifiees du carre dynamique : " << std::endl;
    carreDynamique->Afficher();

    carreDynamique->Deplacer(5, -10);
    cout << "\nCaracteres du carre dynamique apres deplacement (dx=5, dy=-10) : " << std::endl;
    carreDynamique->Afficher();

    delete carreDynamique;
    cout << "\nLe carre dynamique a ete supprime." << std::endl;

    return 0;
}
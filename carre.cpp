#include <iostream>
#include <stdio.h>
#include "carre.h"

using namespace std;


CCarre::CCarre() : sx(0), sy(0), cote(0) {}

CCarre::CCarre(int sx, int sy, int cote) : sx(sx), sy(sy), cote(cote) {}

void CCarre::Setsx(int sx1) 
{
    sx = sx1;
}

void CCarre::Setsy(int sy1) 
{
    sy = sy1;
}

void CCarre::Setcote(int cote1) 
{
    cote = cote1;
}

int CCarre::Getsx() 
{
    return sx;
}

int CCarre::Getsy() 
{
    return sy;
}

int CCarre::Getcote()
{
    return cote;
}

void CCarre::Afficher()
{
    std::cout << "Caracteristiques du carre : " << std::endl;
    std::cout << "Coordonnee x : " << sx << std::endl;
    std::cout << "Coordonnee y : " << sy << std::endl;
    std::cout << "Longueur du cote : " << cote << " pixels" << std::endl;
}

void CCarre::Deplacer(char direction, int saut)
{
    switch (direction) 
    {
    case 'n': sy -= saut; break;
    case 's': sy += saut; break;
    case 'o': sx -= saut; break;
    case 'e': sx += saut; break;
    default:
        std::cerr << "Direction invalide : " << direction << std::endl;
    }
}

void CCarre::Deplacer(int dx, int dy)
{
    sx += dx;
    sy += dy;
}
#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class CCarre
{
private:
    int sx;    
    int sy;    
    int cote;  

public:
    CCarre();  
    CCarre(int sx, int sy, int cote);  

    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(int cote1);

    int Getsx();
    int Getsy();
    int Getcote();

    void Afficher();

    void Deplacer(char direction, int saut);

    void Deplacer(int dx, int dy);
};



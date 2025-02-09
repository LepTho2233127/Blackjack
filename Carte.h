// Destructor
#ifndef CARTE_H
#define CARTE_H

#include "Sorte.h"

class Carte {
public:
    Carte(int valeur, Sorte sorte);
    ~Carte();

private:
    int valeur;
    Sorte sorte;
};

Carte::Carte(int valeur, Sorte sorte){};
   
#endif // CARTE_H

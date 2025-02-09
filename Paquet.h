#ifndef PAQUET_H
#define PAQUET_H


#include "Carte.h"
#include <iostream>
#include <stack>
#include "Sorte.h"

class Paquet {  
    public : 
        Paquet();
        ~Paquet();
        void melanger();
        Carte* tirer();
        void afficher();
    private :
        std::stack<Carte*> paquet;
        Sorte sorte;
        
};    

Paquet::Paquet(){};

#endif


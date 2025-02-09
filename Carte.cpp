#include "Carte.h"

class Carte {
public:
    Carte(int num, enum Sorte sorte); // Constructor
    ~Carte(); // Destructor

private:
    int num; 
    Sorte sorte;// Member variable
};

Carte::Carte(int num, Sorte sorte){
    this->num = num;
    this->sorte = sorte;

}
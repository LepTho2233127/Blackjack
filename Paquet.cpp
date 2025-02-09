#include "Paquet.h"



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

Paquet::Paquet(){
    for (int i = 0; i < 4; i++){
        for (int j = 1; j < 14; j++){

            switch (i)
            {
            case 0:
                sorte = Sorte::COEUR;
                paquet.push(new Carte(j, sorte));/* code */
                break; 

            case 1:
                sorte = Sorte::CARREAU;
                paquet.push(new Carte(j, sorte));/* code */
                break;                
            case 2:
                sorte = Sorte::TREFLE;
                paquet.push(new Carte(j, sorte));/* code */
                break;
            case 3:
                sorte = Sorte::PIQUE;   
                paquet.push(new Carte(j, sorte));/* code */
                break;          
            default:
                break;
            }
        }
    }
}

void Paquet::melanger(){

    Carte *carte;


}
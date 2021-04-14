#include <iostream>
#include <string>
#include "mage.h"

using namespace std;

int main(){
    
    Mage Joueur1 ("Tyriou", 20);
    Mage Joueur2 ("Nameless", 20);

    //Affichage Mage
    Joueur1.AfficheMage();
    Joueur2.AfficheMage();

    cout << "Joueur 1 Invoquation ! " << endl;
    Joueur1.Invoquer();
    Joueur1.AfficheMage();
  
    cout << "Joueur 2 invoquation ! " << endl;
    Joueur2.Invoquer();
    Joueur2.AfficheMage();


    return 0;
}
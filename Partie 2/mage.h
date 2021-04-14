#include <iostream>
#include <string>
#include "monstre.h"
 
  
class Mage
{ 
    private:
 
    std::string _nomMage ;
    int _pvMage ;
    std::string listMonstre[3] ;
    int listpvMonstre[3];
    int listAtqMonstre[3];
  

    public:
 
    Mage();
    Mage(std::string nom, int pv);
    void AfficheMage();
    void Invoquer();
    void ChoixAttaque();
    void DommageMage(int nbrdommage);
 

};
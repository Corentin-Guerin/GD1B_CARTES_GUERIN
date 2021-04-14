#include "monstre.cpp"
#include "mage.h"
#include <string>
#include <vector>

using namespace std;

Mage::Mage() {
    listMonstre[0] = "" ;
    listMonstre[1] = "" ;
    listMonstre[2] = "" ;
    listpvMonstre[0] = 0;
    listpvMonstre[1] = 0;
    listpvMonstre[2] = 0;
    listAtqMonstre[0] = 0;
    listAtqMonstre[1] = 0;
    listAtqMonstre[2] = 0;
}

Mage::Mage(std::string nomMage, int pvMage) : _nomMage(nomMage), _pvMage(pvMage){
    listMonstre[0] = "" ;
    listMonstre[1] = "" ;
    listMonstre[2] = "" ;
    listpvMonstre[0] = 0;
    listpvMonstre[1] = 0;
    listpvMonstre[2] = 0;
    listAtqMonstre[0] = 0;
    listAtqMonstre[1] = 0;
    listAtqMonstre[2] = 0;
}

void Mage::AfficheMage(){
    cout << _nomMage << " : HP = " << _pvMage << endl ;
    if (_pvMage == 0){
        cout << _nomMage << " est mort !" << endl ;
    }
    else {
        for (int i(0); i<3;i++){
            cout << listMonstre[i] ;
        } 
    }
}


void Mage::Invoquer(){

    string _nomMons ;
    int _pvMons ;
    int _atqMons ;

    cout << "Nom du monstre : " ;
    cin >> _nomMons ;
    cout << "Points de vie : " ;
    cin >> _pvMons ;
    cout << "Points d'attaque : " ;
    cin >> _atqMons ;

    if (listMonstre[0] == ""){

        listMonstre[0] = _nomMons;
        listpvMonstre[0] = _pvMons;
        listAtqMonstre[0] = _atqMons;
    }
    else if (listMonstre[1] == "")
    {
        listMonstre[1] = _nomMons;
        listpvMonstre[1] = _pvMons;
        listAtqMonstre[1] = _atqMons;
    }
    else if (listMonstre[2] == "")
    {
        listMonstre[2] = _nomMons;
        listpvMonstre[2] = _pvMons;
        listAtqMonstre[2] = _atqMons;
    }
    else{
        cout << "Il y a trop de monstres sur le terrain !" << endl ;
    }
}

void Mage::DommageMage(int nbrdommage){
    _pvMage -= nbrdommage ;

    if (_pvMage < 0)
    {
        _pvMage = 0 ;
    }
}

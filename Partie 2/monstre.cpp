#include "monstre.h"

using namespace std;

Monstre::Monstre() : _nom("Monstre"), _atq(2), _pv(3), _repos(false), _etat(true){

}

Monstre::Monstre(std::string nom, int pv, int atq, bool repos,bool etat) : _nom(nom), _pv(pv), _atq(atq), _repos(repos), _etat(etat){

}

void Monstre::Affiche(){
    if(_etat){

        if ( _repos == true){
            cout << _nom << " au repos ! " ;      
        }
        else {
            cout << _nom << " prêt ! " ; 
        } 

        cout << " Attaque = " << _atq << "      Vie = " << _pv << endl ;
    }
    else {cout << _nom << " est mort !" << endl ; }
}

void Monstre::Attaque(){
    if (_repos==false){ 
        _repos=true ;   // /!\ remetre a true a chaque nouveau tour
        
                       
    }
    else { cout << "Le monstre est au repos !";}
}

void Monstre::Dommage(int nbratq){
    _pv = _pv - nbratq;

    if (_pv < 0)
    {
        _pv = 0 ;
    }
}

void Monstre:: FinTour(){
    _repos=false ;
    if (_pv<=0)
    {
        _etat = false ;
    }
}


int Monstre::getatq() const{
    return _atq ;
}

int Monstre::getetat() const{
    return _etat ;
}

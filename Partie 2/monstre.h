#ifndef DEF_MONSTRE
#define DEF_MONSTRE

#include <iostream>
#include <string>
 
class Monstre
{
    private:

    std::string _nom ;
    int _pv ;
    int _atq ;
    bool _repos ;
    bool _etat ;

    public:

    Monstre() ;
    Monstre(std::string _nom, int _pv, int _atq, bool _repos, bool _etat) ;
    void Affiche() ;
    void Attaque() ;
    void Damage(int nbratq) ;
    void FinTour();
    int getatq() const ;
    int getetat() const ;
 
};
 
#endif
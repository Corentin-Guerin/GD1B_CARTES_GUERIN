#include <iostream>
#include <string>
#include "monstre.cpp"


using namespace std;

int main(){
    
    Monstre Monstre1 ( "Ysera", 12, 4, false,true) ;
    Monstre Monstre2 ( "Murlocs", 10, 2, false,true) ;

    bool Monstre1win = false ;
    bool Monstre2win = false ;

    while( !Monstre1win && !Monstre2win){
        //Affichage 
        cout << endl<< endl ;
        cout << "Monstre 1 :" << endl;
        cout << "      ʕง•ᴥ•ʔง      " ;
        Monstre1.Affiche();

        cout << endl<< endl << endl ;

        cout << "Monstre 2 :" << endl;
        cout << "      (ง°ل°)ง      " ;
        Monstre2.Affiche();

        //Attaque Monstre1  (Joueur)
        cout << endl<< endl ;
        cout << "Le Monstre 1 attaque !" << endl;
        Monstre1.Attaque() ;
        Monstre2.Damage(Monstre1.getatq()) ;               //degat reçu par adversaire lors de l'attaque
        //Attaque Monstre2  (Auto)
        cout << "Le Monstre 2 attaque !" << endl;
        Monstre2.Attaque() ;
        Monstre1.Damage(Monstre2.getatq()) ;  


        //Fin de tour
        Monstre1.FinTour() ;
        Monstre2.FinTour() ;

        if (!Monstre1.getetat()){
            Monstre2win = true ;
        }
        if (!Monstre2.getetat()){
            Monstre1win = true ;
        }
    }
    //Affichage 
    cout << endl<< endl ;
    cout << "Monstre 1 :" << endl;
    cout << "      ʕง•ᴥ•ʔง      " ;
    Monstre1.Affiche();

    cout << endl<< endl << endl ;

    cout << "Monstre 2 :" << endl;
    cout << "      (ง°ل°)ง      " ;
    Monstre2.Affiche();
  


    if (Monstre2win){
        cout << "Le Monstre 2 gagne !" << endl;
    }
    if (Monstre1win){
        cout << "Le Monstre 1 gagne !" << endl; 
    }
    return 0;
}
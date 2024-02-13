#include "Abonne.h"
using namespace std;

void Abonne::saisir(){
    cout<<"Saisir le nom ";
    cin>>nom;
    cout<<"Saisir le prenom ";
    cin>>prenom;
    cout<<"Saisir le numero d'appel ";
    cin>>numAppel;
    cout<<"Saisir le CIN ";
    cin>>CIN;
    cout<<"Saisir le solde ";
    cin>>solde;
}

void Abonne::afficher(){
    cout<<"Nom : "<<nom<<endl;
    cout<<"Prenom : "<<prenom<<endl;
    cout<<"Numero appel : "<<numAppel<<endl;
    cout<<"CIN : "<<CIN<<endl;
    cout<<"Solde : "<<solde<<endl;
}

void Abonne::recharger(float solde){
    this->solde+=solde;
}

bool Abonne::consommer(int secondes, float prixMinute){
    float prix;
    prix=secondes*prixMinute;
    if (solde>prix){
        solde-=prix;
        return true;
    }
    return false;
}

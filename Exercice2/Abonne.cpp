#include "Temps.h"
using namespace std;

void Abonee::saisir(){
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

void Abonee::afficher(){
    cout<<"Nom : "<<nom<<endl;
    cout<<"Prenom : "<<prenom<<endl;
    cout<<"Numero appel : "<<numAppel<<endl;
    cout<<"CIN : "<<CIN<<endl;
    cout<<"Solde : "<<solde<<endl;
}

bool Abonee::consommer(int secondes=12, float prixMinute=0.18){
    float prix;
    prix=secondes*prixMinute;
    if (solde>prix){
        solde-=prix;
        return true;
    }
    return false;


}

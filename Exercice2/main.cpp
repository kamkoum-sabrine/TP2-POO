#include <iostream>
#include "Abonne.h"
#include "Abonne.cpp"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Abonne *A;
    float solde,prixConsom;
    int nbSecondes;
    A = new Abonne();
    A->saisir();
    A->afficher();
    cout<<"Saisir le solde à recharger ";
    cin>>solde;
    A->recharger(solde);
    cout<<"Saisir le prix d'une seconde ";
    cin>>prixConsom;
    cout<<"Saisir le nombre de secondes ";
    cin>>nbSecondes;
    if (A->consommer(nbSecondes, prixConsom)){
        cout<<"Appel effectue !"<<endl;
        cout<<"Le solde restant: "<<A->getSolde()<<endl;
    }
    else
        cout<<"Solde insuffisant! ";

    return 0;
}

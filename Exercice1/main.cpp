#include <iostream>
#include "Temps.h"
#include "ctemps.cpp"
using namespace std;

int main()
{
    CTemps *C1;
    CTemps *C2;
    char choix;
    C1 = new CTemps();
    C2 = new CTemps();
    C1->saisir();
    C2->saisir();

    cout<<"Quel affichage preferez-vous "<<endl<<"A-Affichage heure anglaise"<<endl<<"F-Affichage heure francaise"<<endl;
    cin>>choix;
    switch (choix){
        case 'A': cout<<"Affichage heure anglaise "<<endl;
                C1->affiche_anglaise();
                C2->affiche_anglaise();
                break;
        case 'F': cout<<"Affichage heure francaise "<<endl;
                C1->affiche_francaise();
                C2->affiche_francaise();
                break;
        default: cout<<"Choix invalide"<<endl;
    }
    if (C1->inferieur(*C2))
        cout<<"C1 est inferieur à C2";
    else
        cout<<"C2 est inférieur à C1";
    return 0;
}

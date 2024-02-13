#ifndef ABONNE_H_INCLUDED
#define ABONNE_H_INCLUDED
#include "string"
using namespace std;

class Abonee
{
    private:
        string nom;
        string prenom;
        int numAppel;
        int CIN;
        float solde;

    public:
        Abonne(string nom="",string prenom="",int numAppel=0, int CIN=0,float solde=0.0){
            this->nom=nom;
            this->prenom=prenom;
            this->numAppel=numAppel;
            this->CIN=CIN;
            this->solde=solde;
        }

        void saisir();
        void afficher();
        void recharge(float solde);
        bool consommer(int secondes=12, float prixMinute=0.18);
};


#endif // ABONNE_H_INCLUDED

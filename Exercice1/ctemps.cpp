#include "Temps.h"
using namespace std;

CTemps::CTemps(int heure,int minute, int seconde){
    this->heure = heure;
    this->minute = minute;
    this->seconde = seconde;
}

void CTemps::affiche_anglaise(){
    if (heure-12>=0){
        cout<<(heure-12)<<":"<<minute<<":"<<seconde<<" pm";
    }
    else {
        cout<<heure<<":"<<minute<<":"<<seconde<<" am"<<endl;
    }
}

void CTemps::affiche_francaise(){
        cout<<heure<<":"<<minute<<":"<<seconde<<" pm"<<endl;
}

int CTemps::inferieur(CTemps &T){
    if (this->heure<T.heure){
        return 1;
    }
    else {
        if (this->heure==T.heure){
            if (this->minute<T.minute){
                return 1;
            }
            else {
                if (this->minute == T.minute){
                    if (this->seconde<T.minute){
                        return 1;
                    }
                    else return 0;
                }
            }
        }
    }
    return 0;
}

void CTemps::saisir(){
    cout<<"Saisir heure ";
    cin>>heure;
    cout<<"Saisir minute ";
    cin>>minute;
    cout<<"Saisir seconde ";
    cin>>seconde;
}

#include "Pile.h"
#include <vector>

void Pile::Empiler(int donnee){
    elements.push_back(donnee);
}

bool Pile::pileVide(){
    return elements.empty();
}
void Pile::Depiler(){
    if (!pileVide()) elements.pop_back();
    else cout<<"La pile est vide! "<<endl;
}

void Pile::affichePile(){
    cout<<"Affichage du pile : "<<endl;
    while(!pileVide()){
        cout<<sommet()<<endl;
        Depiler();
    }
}

int Pile::sommet(){
    if (!pileVide()) {
            return elements.back();
    }
     else {
        cout<< "La pile est vide! "<<endl;
        return -1;
    }
}

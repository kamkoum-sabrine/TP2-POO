#include <iostream>
#include "Pile.h"
#include "Pile.cpp"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Pile *p;
    int n,x;
    p = new Pile();
    cout<<"Saisir la taille de votre pile ";
    cin>>n;
    p->pileVide();
    for (int i=0;i<n;i++){
        cin>>x;
        p->Empiler(x);
    }
    p->affichePile();
    cout<<"Depiler pile "<<endl;
    p->Depiler();
    p->affichePile();
    return 0;
}

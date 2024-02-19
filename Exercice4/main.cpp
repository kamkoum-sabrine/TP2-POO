#include <iostream>
#include "Complexe.h"
#include "Complexe.cpp"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Complexe *c;
    c = new Complexe(5,3);
    c->afficherC();
    c->additionnerR(4);
    c->afficherC();
    c->multiplierR(2);
    c->afficherC();
    Complexe c2 (2,2);
    Complexe resAdd(0,0);

    resAdd = c->additionnerI(c2);
    resAdd.afficherC();
    Complexe resMult(0,0);
    resMult = c->additionnerI(c2);
    resMult.afficherC();
    return 0;
}

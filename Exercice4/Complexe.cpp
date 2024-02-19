#include "Complexe.h"
using namespace std;

Complexe::Complexe(float reelle, float imaginaire)
{
    this->reelle = reelle;
    this->imaginaire = imaginaire;
}

float Complexe::getReelle()
{
    return reelle;
}

float Complexe::getImaginaire()
{
    return imaginaire;
}

void Complexe::additionnerR(float reelle)
{
    this->reelle+=reelle;
}

void Complexe::multiplierR(float r)
{
    this->reelle*=r;
    this->imaginaire*=r;
}

Complexe Complexe::multiplierI(Complexe &c)
{
    Complexe  res;
    //res = new Complexe();
    res.reelle = this->reelle*c.reelle+this->imaginaire*c.imaginaire*(-1);
    res.imaginaire = this->reelle*c.imaginaire+this->imaginaire*c.reelle;

    return res;
}

Complexe Complexe::additionnerI(Complexe &c)
{
    Complexe res;
    res.reelle = this->reelle+c.reelle;
    res.imaginaire = this->imaginaire+c.imaginaire;
}

void Complexe::afficherC()
{
    cout<<reelle<<"+"<<imaginaire<<"i"<<endl;
}

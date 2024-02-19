#ifndef COMPLEXE_H_INCLUDED
#define COMPLEXE_H_INCLUDED

class Complexe{
    private:
        float reelle;
        float imaginaire;
    public:
        Complexe(){};
        Complexe(float,float);
        float getReelle();
        float getImaginaire();
        void additionnerR(float);
        void multiplierR(float);
        Complexe multiplierI(Complexe &);
        Complexe additionnerI(Complexe &);
        void afficherC();
};


#endif // COMPLEXE_H_INCLUDED

#ifndef TEMPS_H_INCLUDED
#define TEMPS_H_INCLUDED

class CTemps{
    private:
        int heure;
        int minute;
        int seconde;

    public:

        CTemps(int heure=0,int minute=0,int seconde=0);
        void affiche_anglaise();
        void affiche_francaise();
        int inferieur(CTemps &);
        void saisir();

};


#endif // TEMPS_H_INCLUDED

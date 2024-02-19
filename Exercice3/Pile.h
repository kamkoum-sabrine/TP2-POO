#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED
#include <vector>
using namespace std;
class Pile
{
    private:
        std::vector<int> elements;

    public:
        Pile(){};
        void Empiler(int donnee);
        void Depiler();
        bool pileVide();
        void affichePile();
        int sommet();
};


#endif // PILE_H_INCLUDED

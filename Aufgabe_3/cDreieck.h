#include <iostream>
#include <string>
#include "cPunkte.h"


using namespace std;

class cDreieck{

    private: 
        cPunkt a,b,c;
        double umfang();
        double flaeche();
        double strecke(cPunkt a, cPunkt b);
    public:
        cDreieck();
        cDreieck(cPunkt a_in, cPunkt b_in, cPunkt c_in);
        void ausgabe();


};
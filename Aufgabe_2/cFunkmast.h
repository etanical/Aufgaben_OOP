#include <iostream>
#include <string>
#include "cGeoPos.h"

using namespace std;

class cFunkmast
{
    private:
        int anz_Antenne, reichweite, hoehe;
        cGeoPos position;
    public:
        cFunkmast();
        cFunkmast(int anz_ant_in, int reichweite_in, int hoehe_in, cGeoPos position_in);
        void ausgabe(int i);
        void eingabe();
        void set_antenne(int n);
        void set_reichweite(int n);
        void set_hoehe(int n);
        int get_antenne();

};
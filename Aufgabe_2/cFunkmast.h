#include <iostream>
#include <string>

using namespace std;

class cFunkmast
{
    private:
        int anz_Antenne, reichweite, hoehe, geoPos;
    public:
        cFunkmast();
        cFunkmast(int anz_ant_in, int reichweite_in, int hoehe_in, int geoPos_in);
        void ausgabe(int i);
        void eingabe();
        void set_antenne(int n);
        void set_reichweite(int n);
        void set_hoehe(int n);
        void set_geoPos(int n);
        int get_antenne();

};
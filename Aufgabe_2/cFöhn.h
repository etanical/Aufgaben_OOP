
#include <string>
#include <iostream>

using namespace std;

class cFöhn
{
    private:
        string bezeichnung, farbe;
        int leistung_in_watt, anz_Schaltstufen;
    public:
        void eingabe();
        void ausgabe();
        cFöhn();
        cFöhn(string bez_in, string farbe_in, int leistung_in, int stufen_in);
        ~cFöhn();



};
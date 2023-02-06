#include <iostream>
#include <string>

using namespace std;

class cSchienenfahrzeug
{
    private:
        double gewicht;
    public:
        double get_gewicht()
        {
            return gewicht;
        }
        cSchienenfahrzeug()
        {
            gewicht = 1;
        }
};

class cLokomotive: public cSchienenfahrzeug
{
    private:
        double triebkraft;
    public:
        void ankuppeln()
        {
            cout << "ICH ZIEHE EUCH ALLE!" << endl;
        }
        double bereitstellen(double treibstoff)
        {
            return (((get_gewicht() + treibstoff) * triebkraft) / 1000);
        }
        cLokomotive()
        {
            triebkraft = 3;
        }
};

class cDiesellock: public cLokomotive
{
    public:
        double tanken()
        {
            return 2000;
        }
        double bereitstellen(double treibstoff)
        {
            return treibstoff + tanken();
        }
        cDiesellock()
        {
            
        }
};

class cDampflock: public cLokomotive
{
    public:
        void bereitstellen();
        void anheizen();
        cDampflock()
        {
            
        }

};

class cWagon: public cSchienenfahrzeug
{
    public: 
        void ankuppeln()
        {
            cout << "Ich lass mich ziehen JUHU!" << endl;
        }
        cWagon()
        {
            
        }
};

class cPersonenwagen: public cWagon
{
    private:
        int fahrgastanzahl;
    public:
        void einsteigen();
        void aussteigen();
        cPersonenwagen()
        {
            fahrgastanzahl = 100;
        }
};

class cGueterwagen: public cWagon
{
    private:
        double nutzlast;
    public:
        void zuladen();
        void abladen();
        double get_gewicht();
        cGueterwagen()
        {
            nutzlast = 1000;
        }
};


int main()
{


    return 0;
}
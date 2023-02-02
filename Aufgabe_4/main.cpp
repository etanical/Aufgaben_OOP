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
};

class cLokomotive: public cSchienenfahrzeug
{
    private:
        double triebkraft;
    public:
        void ankuppeln();
        void bereitstellen();
};

class cDiesellock: public cLokomotive
{
    public:
        void tanken();
        void bereitstellen();
};

class cDampflock: public cLokomotive
{
    public:
        void bereitstellen();
        void anheizen();

};

class cWagon: public cSchienenfahrzeug
{
    public: 
        void ankuppeln();
};

class cPersonenwagen: public cWagon
{
    private:
        int fahrgastanzahl;
    public:
        void einsteigen();
        void aussteigen();
};

class cGueterwagen: public cWagon
{
    private:
        double nutzlast;
    public:
        void zuladen();
        void abladen();
        double get_gewicht();
};


int main()
{


    return 0;
}
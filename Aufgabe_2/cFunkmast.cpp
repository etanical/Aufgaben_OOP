#include <iostream>
#include <string>
#include "cFunkmast.h"
//#include "cGeoPos.h"

using namespace std;

// Default Konstruktor
cFunkmast::cFunkmast()
{
    anz_Antenne = 0;
    reichweite = 0;
    hoehe = 0;
   
}

// Konstruktor
//cFunkmast::cFunkmast(int anz_ant_in, int reichweite_in, int hoehe_in, cGeoPos position_in)
cFunkmast::cFunkmast(int anz_ant_in, int reichweite_in, int hoehe_in
{
    anz_Antenne = anz_ant_in;
    reichweite = reichweite_in;
    hoehe = hoehe_in;

}

void cFunkmast::ausgabe(int i)
{
    cout << "Funkmast Nummer: " + i << ":   " + anz_Antenne << "    " + reichweite << "     " + hoehe << "      " << endl;
    //printf("Funkmast Nummer: %i             %i           %i           %i          %i \n", i, anz_Antenne, reichweite, hoehe, position);
}

void cFunkmast::eingabe()
{

}


// Setter 
void cFunkmast::set_antenne(int n)
{
    anz_Antenne = n;
}

void cFunkmast::set_reichweite(int n)
{
    reichweite = n;
}

void cFunkmast::set_hoehe(int n)
{
    hoehe = n;
}

//Setter

int cFunkmast::get_antenne()
{
    return anz_Antenne;
}
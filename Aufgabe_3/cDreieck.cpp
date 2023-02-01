#include <iostream>
#include <string>
#include "cDreieck.h"
#include <math.h>

using namespace std;

cDreieck::cDreieck()
{
    a = cPunkt(0,0);
    b = cPunkt(1,0);
    c = cPunkt(0,1);
}

cDreieck::cDreieck(cPunkt a_in, cPunkt b_in, cPunkt c_in)
{
    a = a_in;
    b = b_in;
    c = c_in;
}

double cDreieck::strecke(cPunkt a, cPunkt b)
{
    double strecke;
    strecke = sqrt((a.get_x() - b.get_x())*(a.get_x() - b.get_x()) + (a.get_y() - b.get_y())*(a.get_y() - b.get_y()));
    printf("%d", strecke);
    return strecke;
}

double cDreieck::umfang()
{
    printf("%d\n\n", strecke(a,b));
    return strecke(a,b) + strecke(a,c) + strecke (b,c);
}

double cDreieck::flaeche()
{
    double flaeche,s;
    s = umfang()/2;
    flaeche = sqrt(s * (s - strecke(a,b)) * (s - strecke(a,c) * (s - strecke(b,c))));
    return flaeche;   
}

void cDreieck::ausgabe()
{
  //  cout << "Umfang des Dreiecks:   " << umfang() << endl;
  //  cout << "Flaeche des Dreiecks:  " << flaeche() << endl;
 printf("Umfang des Dreiecks:  %d \n", umfang());
  //printf("flaeche des Dreiecks:  %d \n", flaeche());
}
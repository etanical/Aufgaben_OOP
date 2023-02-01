#include <iostream>
#include <string>
#include "cPunkte.h"

using namespace std;

cPunkt::cPunkt()
{
    x = 0;
    y = 0;
}

cPunkt::cPunkt(double x_in, double y_in)
{
    x = x_in;
    if(x_in > 10) x = 10;
    if(x_in < -10) x = -10;
    

    y = y_in;
    if(y_in > 10) y = 10;
    if(y_in < -10) y = -10;
    
}

void cPunkt::ausgabe()
{
    cout << "die X Koordinate ist:  " << x << endl;
    cout << "die Y Koordinate ist:  " <<  y << endl;
}

void cPunkt::set_x(double x_in)
{
    x = x_in;
}

void cPunkt::set_y(double y_in)
{
    y = y_in;
}

double cPunkt::get_x()
{
    return x;
}
double cPunkt::get_y()
{
    return y;
}
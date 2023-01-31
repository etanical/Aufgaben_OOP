#include <iostream>
#include <string>
#include "cFunkmast.h"

using namespace std;

int main()
{
    cFunkmast test[100];
    int counter = 0;
    for(int i = 0; i <=10; i++)
    {
        test[i].set_antenne(1);
        test[i].set_reichweite(2);
        test[i].set_hoehe(3);
        test[i].set_geoPos(4);
    }

    cout << "Funkmast   Anzahl Antennen     Reichweite      Hoehe       GeoPos\n";
    
    while(test[counter].get_antenne() != 0)
    {
        test[counter].ausgabe(counter);
        counter++;
    }

    return 0;
}
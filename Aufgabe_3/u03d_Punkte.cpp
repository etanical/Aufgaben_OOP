#include <iostream>
#include <string>
#include "cDreieck.h"

using namespace std;


int main()
{
    cPunkt a(23.9, 3.13), b(5.24, -16.8), c(-6.72, 8.42);
    cPunkt aa(0.5, 1), bb(1.5, 0), cc(0.5, 0);
    cPunkt aaa,bbb,ccc;
    cDreieck da(a,b,c), db(aa,bb,cc), dc(aaa,bbb,ccc);

    da.ausgabe();


    return 0;
}
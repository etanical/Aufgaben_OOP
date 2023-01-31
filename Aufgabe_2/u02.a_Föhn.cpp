#include <iostream>
#include <string>
#include "cFöhn.h"

using namespace std;

int main ()
{
    cFöhn test;
    test.ausgabe();
    test.eingabe();
    test.ausgabe();
    test.~cFöhn();
    test.ausgabe();

    return 0;
}
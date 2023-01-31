#include <iostream>
#include <string>
#include "cFöhn.h"

using namespace std;

cFöhn::cFöhn()
{
    bezeichnung = "undefiniert";
    farbe = "keine";
    anz_Schaltstufen = 0;
    leistung_in_watt = 0;
}

cFöhn::cFöhn(string bez_in, string farbe_in, int leistung_in, int stufen_in)
{
    bezeichnung = bez_in;
    farbe = farbe_in;
    anz_Schaltstufen = stufen_in;
    leistung_in_watt = leistung_in;
}

cFöhn::~cFöhn()
{
    cout << "Objekt wird zerstört\n";
}

void cFöhn::ausgabe()
{
    cout << "Der Föhn heißt:    " + bezeichnung << "\n";
    cout << "Die Farbe des Föhns ist:   " + farbe << "\n";
    cout << "Die Anzahl der Schaltstufen beträgt:   " + anz_Schaltstufen << "\n";
    cout << "Die Leistung des Föhns in Watt beträgt:    " + leistung_in_watt << "\n";
}

void cFöhn::eingabe()
{
    cout << "Wie heißt der Föhn?\n";
    cin >> bezeichnung;
    cout << "Welche Farbe hat der Föhn?\n";
    cin >> farbe;
    cout << "Wie viel Schaltstufen hat der Föhn?\n";
    cin >> anz_Schaltstufen;
    cout << "Welche Leistung hat der Föhn in Watt?\n";
    cin >> leistung_in_watt;
}


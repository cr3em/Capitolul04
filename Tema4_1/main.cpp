#include <iostream>

/* Declarați și inițializați următoarele variabile:

O variabilă globală
O variabilă globală statică
O variabilă într-un namespace
Două variabile locale
O variabilă locală statică
Tipăriți la consolă adresele tuturor variabilelor folosind operatorul & */

using namespace std;

double Pi = 3.14;
static double var1 = 2.56;

namespace beta {
    int numar;
}

int main()
{
    short nota = 12;
    int var1 = 5;
    static float numar = 7.8845;

    cout << "Adresa este " << &Pi << endl; // adresa variabila globala

    cout << "Adresa este " << &::var1 << endl; // adresa variabila globala statica

    cout << "Adresa este " << &beta::numar << endl; // adresa variabila din namespace beta

    cout << "Adresa variabilei locale este " << &nota << " si " << &var1 << endl; // adrese variabile locale

    cout << "Adresa este " << &numar << endl; // adresa variabilei locale statice

    return 0;
}

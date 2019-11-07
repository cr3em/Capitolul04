#include <iostream>

using namespace std;

struct Adresa {
    char prenume[10];
    char strada[10];
    char oras[10];
    char judet[10];
    unsigned int numar;
    unsigned int codPostal;
};

void citire (Adresa& adr)  // functie de citire
{
    cout << "Introdu numele "; cin >> adr.prenume;
    cout << "Introdu judetul "; cin >> adr.judet;
    cout << "Introdu orasul "; cin >> adr.oras;
    cout << "Introdu strada "; cin >> adr.strada;
    cout << "Introdu numarul "; cin >> adr.numar;
}

void afisare (Adresa adr)  // functia de afisare
{
    cout << "Ma numesc " << adr.prenume << endl;
    cout << "M-am nascut in judetul " << adr.judet << ", in orasul " << adr.oras << ", pe strada " << adr.strada << ", la numarul " << adr.numar << endl;
}

int main()
{
    Adresa adr;
    citire(adr);
    afisare(adr);

    return 0;
}

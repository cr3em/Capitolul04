#include <iostream>
#include <iomanip>

using namespace std;

struct Suprafata {
    float lung;
    float lat;
};

enum TipTeren {agricol, pasune, livada, viran};  //  parametrii enum sunt tratați ca si int

struct Teren {
    long long cnpProprietar;
    TipTeren  tipTeren;
    Suprafata suprafata;
    float arie;
};

int main()
{
    cout << fixed;
    cout << setprecision(2);

    Teren unTeren;  // declarație pe stack a variabilei unTeren de tip Teren
    unTeren.suprafata.lung = 57.72;  // Atribuire valori elementelor structurilor
    unTeren.suprafata.lat = 25.28;
    unTeren.cnpProprietar = 2850215354780;
    unTeren.tipTeren = agricol;
    unTeren.arie = unTeren.suprafata.lung * unTeren.suprafata.lat;

    // Copiați în membrii variabilei oMovila valorile membrilor echivalenți ai variabilei unTeren

    Teren *oMovila = new Teren;
    oMovila->suprafata.lung = unTeren.suprafata.lung;
    oMovila->suprafata.lat = unTeren.suprafata.lat;
    oMovila->cnpProprietar = unTeren.cnpProprietar;
    oMovila->tipTeren = unTeren.tipTeren;
    oMovila->arie = unTeren.arie;

    // Tipăriți la consolă toți membrii variabilei oMovila

    cout << "Terenul are suprafata de " << oMovila->arie << " mp, cu lungimea de " << oMovila->suprafata.lung << " m, si latimea " << oMovila->suprafata.lat << " m.\n";
    cout << "Tipul terenului este ";

    switch (unTeren.tipTeren) {
    case agricol: cout << " agricol";
        break;
    case pasune: cout << " pasune";
        break;
      case livada: cout << " livada";
        break;
    case viran: cout << " viran";
        break;
    }

    cout  << " , si apartine persoanei cu CNP: " << oMovila->cnpProprietar << endl;

    delete oMovila;
    oMovila = nullptr;

    return 0;
}

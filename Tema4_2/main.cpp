#include <iostream>

using namespace std;

int main()
{
    short ident1, ident2, identSuma, identProdus; // declarare variabile local
    short *pntIdent1 = &ident1;  // declarare si atribuire pointeri catre variabila careia ii corespunde
    short *pntIdent2 = &ident2;
    short *pntIdentSuma = &identSuma;
    short *pntIdentProdus = &identProdus;

    *pntIdent1 = 4;  // atribuire hardcoded variabilei prin dereferentierea pointerilor corespunzatori
    *pntIdent2 = 7;
    cout << "Suma lui ident1 si ident2 este " << (*pntIdentSuma = (*pntIdent1 + *pntIdent2)) << endl; // calcul suma si atribuire prin dereferentiere
    cout << "Produsul lui ident1 si ident2 este " << (*pntIdentProdus = (*pntIdent1 * *pntIdent2)) << endl;  // calcul produs si atribuire prin dereferentiere



    return 0;
}

#include <iostream>

using namespace std;

enum Tip {mere = 1, caise, prune, visine};
struct Produs {
    Tip tipProdus;
    float cantitate;
    float pret;
};

int main()
{
    Produs fructe[3];
    double stoc = 0;

    for(int i = 0, j; i < 3; ++i){
        cout << "Introduceti tipul (1-mere, 2-caise, 3-prune, 4-visine): ";
        cin >> j;
        fructe[i].tipProdus = static_cast<Tip>(j);
        cout << "Introduceti cantitatea: ";
        cin >> fructe[i].cantitate;
        cout << "Introduceti pret: ";
        cin >> fructe[i].pret;
    }

    cout << "Produs\t Cantitate\t Pret" << endl;
    for(int i = 0; i < 3; ++i){
        switch (fructe[i].tipProdus) {
        case mere: cout << "Mere"; break;
        case caise: cout << "Caise"; break;
        case prune: cout << "Prune"; break;
        case visine: cout << "Visine"; break;
        }
        cout << "\t\t" << fructe[i].cantitate << "\t" << fructe[i].pret << endl;
        stoc = stoc + (fructe[i].cantitate * fructe[i].pret);
    }
    cout << "Valoare stoc: " << stoc << endl;

    return 0;
}

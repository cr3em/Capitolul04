#include <iostream>

using namespace std;

int main()
{
    int variabila;
    void *pntVar = &variabila;

    *static_cast<int*>(pntVar) = 115; // atribuire valoare variabilei folosind pointerul void

    cout << "Valoare afisata folosint variabila declarata este " << variabila << endl;
    cout << "Valoarea afisata folosint poinerul void este " << *static_cast<int*>(pntVar) << endl; // afisare valoare variabila folosind pointerul void


    return 0;
}

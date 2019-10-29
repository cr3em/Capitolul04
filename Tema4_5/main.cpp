#include <iostream>

using namespace std;
/* Declarați două array-uri de câte 41 de elemente de tip short fiecare, unul pe stack (arrayStack) și celălalt pe heap (arrayHeap).
Inițializați-le (folosind o instrucțiune iterativă) cu valorile:
      0, 7, 14, 21, ... , 280 pentru primul array, arrayStack
      0, 8, 16, 24, ... , 320 pentru al doilea array, arrayHeap
Declarați un al treilea array, tot de 41 de elemente de tip short, în zona globală/statică (arraySuma).
Inițializați elementele celui de-al treilea array ca fiind suma elementelor corespunzătoare din primele două array-uri
( arraySuma[i] = arrayStack[i] + arrayHeap[i] ).
Tipăriți la consolă cel de-al treilea array.
Ar mai fi ceva de făcut. Vă las pe voi să vă dați seama ce. :)*/
short *arraySuma = new short[41];

int main()
{
    short arrayStack[41];
    short *arrayHeap = new short[41];

    for(int i = 0; i < 41; ++i){
        arrayStack[i] = 0 + i*7;
    }

    for(int i = 0; i < 41; ++i){
        arrayHeap[i] = 0 + i*8;
    }

    for(int i = 0; i < 41; ++i){
        arraySuma[i] = arrayStack[i] + arrayHeap[i];
    }

    for(int i = 0; i < 41; ++i){
        cout << "Stack " << arrayStack[i] << "\tHeap " << arrayHeap[i] << "\tStack + Heap = " << arraySuma[i]<< endl;

    }

    delete arrayHeap; arrayHeap = nullptr;
    delete arraySuma; arraySuma = nullptr;

    return 0;
}

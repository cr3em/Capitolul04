#include <iostream>

using namespace std;

int main()
{
    char sirStack[] = "Aici poti sa scri ceea ce vrei!";  // alocare sir pe stack
    char *sirHeap = new char{sizeof(sirStack)}; // alocare sir pe heap

    for(unsigned int i = 0; i < sizeof(sirStack); ++i){  // copiaza continut de pe stack pe heap
        sirHeap[i] = sirStack[i];
    }
    cout << sirHeap << endl;

    int contor = 1;
    for(unsigned int i = 0; i < sizeof(sirStack); ++i){
        if (sirStack[i] == ' ')
            contor += 1;
    }
    cout << "Numar cuvinte in sir: " << contor << endl;  // afisare numar de cuvinte din sir

    cout << "Sirul de pe stack are " << sizeof(sirStack) << " caractere\n";  // afisare numar de caractere din sir

    delete[] sirHeap; sirHeap = nullptr;

    return 0;
}

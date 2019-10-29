#include <iostream>

using namespace std;

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

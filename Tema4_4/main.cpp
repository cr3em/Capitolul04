#include <iostream>

using namespace std;

/* Pointeri pe heap */

double *pnt = new double(1.3);

int main()
{
    double *pnt1 = new double(2.3);
    double *pnt2 = new double(5.4);
    double *pntMedie = new double;
    *pntMedie = (*pnt + *pnt1 + *pnt2)/3;
    cout << "Media aritmetica este " << *pntMedie << endl;

    delete pnt1; pnt1 = nullptr;
    delete pnt2; pnt2 = nullptr;
    delete pntMedie; pntMedie = nullptr;


    return 0;
}

#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
#include <iomanip>
#include "person.h"

using namespace std;

void powe(int n1, int n2)
{
    for(int i1=n1;i1<50;i1+=n2)
    {
        int re1, re2, re3, re4;
        re1 = pow(i1,2);
        re2 = pow(i1,3);
        re3 = pow(i1,4);
        re4 = pow(i1,5);
        cout << i1 << " ~ " << re1 << ", " << re2 << ", " << re3 <<  ", " << re4 << endl;
     }
}

int main()
{
    powe(1,1);
    return 0;
}




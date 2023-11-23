#include <iostream>

using namespace std;

int main()
{
    int n;
    int T[1000];
    int SD=0,SS=0;
    cin >> n;
    for (int i=0; i<n ; i++)
    {
        cin >> T[i];
    }
    int *P1=&T[0];
    int *P2=&T[n-1];
    int nf=0;
    int nl=n-1;
    int nb=0;
    while ( P1 <= P2)
    {
        if (nb % 2 == 0){
        if (*(P1) >= *(P2) )
        {
            SS += *P1;
            nf++;
            P1 = &T[nf];
            P2 = &T[nl];
        }
        else{
            SS += *P2;
            nl--;
            P1 = &T[nf];
            P2 = &T[nl];
        }
        }
        else{
            if (*(P1) >= *(P2) )
        {
            SD += *P1;
            nf++;
            P1 = &T[nf];
            P2 = &T[nl];
        }
        else{
            SD += *P2;
            nl--;
            P1 = &T[nf];
            P2 = &T[nl];
        }

        }
        nb++;
    }
    cout << SS << " " << SD;
    return 0;
}

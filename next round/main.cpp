#include <iostream>

using namespace std;

int main()
{
    int n,k, p=0;
    int T[50];
    do{
        cin >> n >> k;
    }
    while ((n<1 || n>50) && n<k);
    for (int i=1;i<=n;i++)
    {
        cin >> T[i];
    }
    for (int i=1; i<=n; i++)
    {
        if (T[i]>=T[k] && T[i] > 0)
            p++;
    }
    cout << p;




    return 0;
}

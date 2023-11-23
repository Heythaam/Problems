#include <iostream>
#include <vector>

typedef long long int lli;
using namespace std;


int maxx(lli T[], int n)
{
    int ma=T[0];

    for (int i=1; i<n ; i++)
    {
        if (T[i] > ma)
        {
            ma=T[i];
        }
    }
    return ma;

}



int main()
{
    lli t,n,k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<lli> T(n, 1);
        if (n == 1)
        {
            cout << k << endl;
        }
        else if (n == k)
        {
            cout << 1 << endl;
        }
        else{
        lli sum=n,indice=0;
        while (sum % k != 0)
        {
            T[indice]++;
            sum++;
            indice = (indice + 1) % n;
        }
        cout << maxx(T.data(),n) << endl;

        }
    }
    return 0;
}

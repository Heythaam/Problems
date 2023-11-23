#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,q,x,y,m,sum=0;
    cin >> n;
    vector <int> T(n);
    for (int i =0; i<n;i++)
    {
        cin >> T[i];

    }
    cin >> q;
    while (q--)
    {
        int sum=0;
        cin >> x >> y >> m;
        for (int i =0; i<n;i++)
        {
        sum += T[i];

        }
        if (x >= sum)
        {
            cout << x << endl;
        }
        else{
        x+=sum;
        for (int i =0; i<m; i++)
        {
            y += T[i];
        }
        if (x >= y)
        {
            cout << y << endl;
        }
        else{
            cout << x << endl;
        }
        }

    }
    return 0;
}

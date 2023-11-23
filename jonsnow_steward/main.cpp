#include <iostream>
#include <vector>
typedef long long int lli;
using namespace std;

int main()
{
    lli n;
    cin >> n;
    vector <lli> T(n);
    for (int i =0;i<T.size();i++)
    {
        cin >> T[i];
    }
    lli nb=0;
    for (int i=0; i<T.size();i++)
    {
     if (T[i] > 1 && T[i] < 5)
     {
         nb++;
     }
    }
    cout << nb << endl;
    return 0;
}

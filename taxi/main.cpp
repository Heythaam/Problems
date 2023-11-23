#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;
int main()
{
    lli n,i,somme=0,taxi=0;
    cin >> n;
    vector<int> s(n);
    for (i=0;i< n; i++)
    {
        cin >> s[i];
    }
    for (i=0; i<n;i += 2)
    {
        if (s[i] + s[i+1] > 4)
        {
            taxi +=2;
        }
        else{
            taxi++;
        }
    }
    cout << taxi << endl;
    return 0;
}

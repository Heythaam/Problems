#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;
int main()
{
    lli n,x,i,j,nb=0;
    cin >> n >> x;
    vector<vector<int> > M(n, vector<int>(n));
    for (i=0 ; i< n ; i++)
    {

        for (j=0 ; j < n ; j++)
        {
            M[i][j]=(i+1)*(j+1);
        }
    }
    for (i=0 ; i< n ; i++)
    {
        for (j=0 ; j < n ; j++)
        {
            if (M[i][j] == x)
            {
                nb++;
            }
        }
    }
    cout << nb << endl;


    return 0;
}

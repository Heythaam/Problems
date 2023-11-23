#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int c = 3;
    int n,sumC1=0,sumC2=0,sumC3=0;
    bool v=false;
    cin >> n;
    int  i=0,j;
    vector<vector<int> > M(n, vector<int>(c));
    for (i = 0 ; i < n ; i++)
    {
        for (j= 0 ; j < c ; j++)
        {
            cin >> M[i][j];
        }
    }
    for (j = 0 ; j < c ; j++)
    {

        for (i= 0 ; i < n ; i++)
        {
            if ( j == 0)
            {
                sumC1 += M[i][j];
            }
            if ( j == 1)
            {
                sumC2 += M[i][j];
            }
            if ( j == 2)
            {
                sumC3 += M[i][j];
            }
        }
    }
    if ( sumC1 == 0 && sumC2 == 0 && sumC3 == 0)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,s;
    cin >> n >> s;
    vector <int> T(n);
    for (int i =0 ;i< n; i++)
    {
        T[i]= i+1;
    }
    sort(T.begin(),T.end(),greater<int>());
    int i=0,nb=0;
    while (s > 0)
    {
        if (s >= T[i])
        {
            s -= T[i];
            nb++;
        }
        else{
            i++;
        }
    }
    cout << nb << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,i=0,nb=0;
    cin >> n;
    int bills[] ={100,20,10,5,1};
    while (n > 0)
    {
        if (n >= bills[i])
        {
            n -= bills[i];
            nb++;
        }
        else{
        i++;}
    }
    cout << nb << endl;
    return 0;
}

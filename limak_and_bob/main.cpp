#include <iostream>

using namespace std;

int main()
{
    int a,b;
    do
    {cin >> a >> b;
    }
    while (a > b);
    int nb=0;
    while (a <= b)
    {
        nb++;
        a=a*3;
        b=b*2;

    }
    cout << nb << endl;
    return 0;
}

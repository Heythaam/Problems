#include <iostream>
#include <iomanip>
#include <math.h>
typedef long long int lli;
using namespace std;

int main()
{
    lli n;
    cin >> n;
    if ( n % 2 != 0)
    {
        cout << 0 << endl;
    }
    else{
        cout << static_cast<lli>(pow(2, n / 2)) << endl;
    }
    return 0;
}

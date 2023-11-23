#include <iostream>
#include <math.h>
using namespace std;
typedef long long lli;
lli modPow(lli base, lli exponent, lli modulus) {
    lli result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        base = (base * base) % modulus;
        exponent /= 2;
    }
    return result;
}

int main()
{
    lli n,i;
    cin >> n;
    lli res = modPow(1378, n, 10);
    cout << res  << endl;
    return 0;
}

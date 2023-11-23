#include <iostream>

using namespace std;

int main()
{
    int a,b,c,exp;
    do{cin >> a;
    }
    while( a < 1 || a>10);
    do{cin >> b;
    }
    while( b < 1 || b>10);
    do{cin >> c;
    }
    while( c < 1 || c>10);
    exp=a+b+c;
		exp=max(exp,(a*b*c));
		exp=max(exp,(a+b)*c);
		exp=max(exp,a*(b+c));
		exp=max(exp,a+(b*c));
		exp=max(exp,(a*b)+c);
        cout << exp << endl;
    return 0;
}

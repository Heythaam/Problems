#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int somme=a;
    while (a >= b)
    {
        somme += a/b;
        a = (a/b) + (a % b);
    }
    cout << somme << endl;
}

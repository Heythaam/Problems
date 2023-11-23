#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int nb = 0;
    for (int i=0; i< n; i++)
    {
        if (str[i] == str[i+1])
            nb++;
    }
    cout << nb << endl;
}

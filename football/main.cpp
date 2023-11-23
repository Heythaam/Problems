#include <iostream>
#include <string>
using namespace std;

int main()
{
    string match;
    int nb=1;
    cin >> match;
    for (int i=1; i < match.size(); i++)
    {
        if (match[i] == match[i-1])
        {
            nb++;

        if (nb == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
        }
        else{
            nb=1;
        }

    }
    cout << "NO" << endl;
    return 0;
}

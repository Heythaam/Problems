#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int div;
        cin >> div;
        if (div <=1399)
        {
            cout << "Division 4" << endl;
        }
        else if( div >= 1400 && div <=1599)
        {
            cout << "Division 3" << endl;
        }
        else if( div >= 1600 && div <=1899)
        {
            cout << "Division 2" << endl;
        }
        else if( div >= 1900)
        {
            cout << "Division 1" << endl;
        }
    }
    return 0;
}

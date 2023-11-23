#include <iostream>

using namespace std;

int main()
{
    int i=2,w,test=0,sum=0,j;
            cin >> w;
    while (i<w && test == 0)
    {
        j=w-1;
        while (j-- && test == 0)
        {
            sum=i+j;
            if (sum== w && j % 2 == 0 && i % 2 == 0)
            {
                test=1;
            }
            else{
                test=0;
            }
        }
        i+=2;
    }
    if (test==0)
    {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}


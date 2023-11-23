#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string ch;
    string chvide="";
    char tabcar[6]={'a','e','o','u','i','y'};

    cin >> ch;
    for(int i=0;i<ch.size();i++){

        bool test=false;
        for(int j=0;j<6;j++)
        {
            ch[i]= tolower((ch[i]));
            if (ch[i] ==tabcar[j] )
            {
                test=true;
                break;
            }

        }
    if (!test)
    {
      chvide +=".";
      chvide +=ch[i];
    }
    }
    cout << chvide << endl;
    return 0;
}

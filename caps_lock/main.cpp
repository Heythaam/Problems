#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i=0,nb=0;
    if (isupper(s[0])){
    while (i < s.size())
    {
        if (isupper(s[i]))
        {
            nb++;
        }
        i++;
    }
    if (nb == s.size())
    {
        for (i=0 ;i<s.size() ; i++)
        {
            if (isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
            else{
                s[i]=toupper(s[i]);
            }
        }
    }
    }
    else{
        i=1;
        while (i < s.size())
    {
        if (isupper(s[i]))
        {
            nb++;
        }
        i++;
    }
    i=0;
    if (nb == s.size() - 1 )
    {
        for (i=0 ;i<s.size() ; i++)
        {
            if (isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
            else{
                s[i]=toupper(s[i]);
            }
        }
    }
    }
    cout << s << endl;
    return 0;
}

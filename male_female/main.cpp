#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    bool seen[256] = {false};
    cin >> str;
    int len=strlen(str);
    int nb=0;
    for (int i=0; i< len; i++)
    {
        if (!seen[str[i]]){
            seen[str[i]]=true;
            nb++;
        }
    }
    if (nb % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}

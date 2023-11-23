#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str, newstr = "";
    char vowels[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        bool IsVowel = false;
        for (int j = 0; j < 6; j++)
        {
            str[i]=tolower(str[i]);
            if (str[i] == vowels[j])
            {
                IsVowel= true;
                break;
            }

        }
        if (!IsVowel)
        {
            newstr += ".";
            newstr += str[i];
        }
    }
    cout << newstr << endl;
    return 0;
}

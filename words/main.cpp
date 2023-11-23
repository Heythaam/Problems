#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[500];
    int nbU=0,nbL=0,len;
    cin >> word;
    len=strlen(word);
    for (int i=0; i< len; i++)
    {
        if (word[i] == toupper(word[i]))
            nbU++;
        else
            nbL++;
    }
    if (nbL >= nbU)
    {
        for (int i=0; i< len; i++)
        {
            word[i]= tolower(word[i]);
        }
    }
    else{
        for (int i=0; i< len; i++)
        {
            word[i]= toupper(word[i]);
        }
    }
    cout << word << endl;
    return 0;
}

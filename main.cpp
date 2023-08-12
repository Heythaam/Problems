#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    int test=0,len1,len2;
    do{
    getline(cin,str1);
    getline(cin,str2);
    len1=strlen(str1);
    len2=strlen(str2);}
    while(len1 != len2);

    for (int i=0; i<len1;i++)
    {
        for (int j=0; j<len2;j++)
        {
            if (int(str1[i])-32 == int(str2[i]) || int(str1[i]) == int(str2[i])-32){
                test=0;
                break;
            }
            if (int(str1[i]) > int(str2[i]))
            {
                test=1;
                break;
            }
            if (int(str1[i]) < int(str2[i]))
            {
                test=-1;
                break;
            }
        }
    }
    cout << test;
    return 0;
}

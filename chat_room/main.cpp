#include <iostream>

using namespace std;

int main()
{
    string hello = "hello",word;
    cin >> word;
    size_t i,j=0;
    int nb=0;
    for(i = 0 ; i< word.size() ; i++)
    {
        if (word[i] == hello[j])
        {
            nb++;
            j++;
        }
    }
    if (nb == 5)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}

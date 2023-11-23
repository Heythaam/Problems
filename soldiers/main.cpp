#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bubbleSort(vector<int>& arr) {
    int n = arr.size(),nb=0;
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                nb++;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
    return nb;
}

int main()
{
    int n;
    cin >> n;
    vector <int> T(n);
    for (int i=0; i< T.size();i++)
    {
        cin >> T[i];
    }
    cout << bubbleSort(T) << endl;

    return 0;
}

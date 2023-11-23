#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
typedef long long int lli;

using namespace std;

void operation1(vector<lli>& T) {
    if (T.size() < 2) {
        return;
    }

    priority_queue<lli, vector<lli>, greater<lli> > pq(T.begin(), T.end());

    pq.pop();
    pq.pop();

    T.clear();
    while (!pq.empty()) {
        T.push_back(pq.top());
        pq.pop();
    }
}


void operation2(vector<lli>& T) {
    if (!T.empty()) {
        vector<lli>::iterator maxElement = max_element(T.begin(), T.end());
        T.erase(maxElement);
    }
}



int main()
{
    lli t;
    cin >> t;
    while (t--)
    {
        lli n,k;
        cin >> n >> k;
        vector <lli> T(n);
        for (int i=0;i < n ; i++)
        {
            cin >> T[i];
        }
        while (k>0)
        {
            //cout << k << endl;
            if (k % 2 != 0)
            {
                operation1(T);
                //cout << "operation1 done" << endl;
            }
            else{
                operation2(T);
                //cout << "operation2 done" << endl;
            }
            k--;
        }
        lli sum=0;
        for (int i =0; i< T.size(); i++)
        {
            sum +=T[i];
        }
        cout << sum << endl;
    }
    return 0;
}

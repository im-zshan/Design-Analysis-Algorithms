#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 7};
    int n = a.size();
    vector<int> high(n, 1), low(n, 1);
    for (int i = 1; i < a.size(); ++i)
    {
        if (a[i] > a[i - 1])
        {
            high[i] = 1 + low[i - 1];
            low[i] = low[i - 1];
        }
        else if (a[i] < a[i - 1])
        {
            low[i] = 1 + high[i - 1];
            high[i] = high[i - 1];
        }
        else
        {
            high[i] = high[i - 1];
            low[i] = low[i - 1];
        }
    }
    cout << "The length of the longest alternating subsequence : " << max(high[n - 1], low[n - 1]);
}
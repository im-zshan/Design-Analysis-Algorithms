#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int Max = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += v[i];
        if (curr < 0)
        {
            curr = 0;
        }
        else
            Max = max(Max, curr);
    }
    cout << Max;
    return 0;
}
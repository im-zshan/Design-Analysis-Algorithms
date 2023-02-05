#include <bits/stdc++.h>
using namespace std;
int lps(string a, string b, int n, int m)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    return dp[n][m];
}
int main()
{
    string a = "abcefcba";
    for (int i = 0; i < 12; ++i)
    {
        a += 'a' + rand() % 26;
    }
    for (char x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    string b = a;
    reverse(b.begin(), b.end());
    cout << "The length of the longest palindromic subsequence : ";
    cout << lps(a, b, a.size(), b.size());
}
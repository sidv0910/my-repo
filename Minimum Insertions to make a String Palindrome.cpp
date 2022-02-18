#include <bits/stdc++.h>
using namespace std;

int minIns(string s)
{
    int n = s.length();
    int dp[n][n] = {0};
    for (int k = 1; k < n; k++)
    {
        for (int i = 0, j = k; i < n-k; i++, j++)
        {
            if (s[i] == s[j])
                dp[i][j] = dp[i+1][j-1];
            else
                dp[i][j] = 1 + min(dp[i][j-1], dp[i+1][j]);
        }
    }
    return dp[0][n-1];
}

int main() 
{
    string s;
    cin >> s;
    cout << minIns(s) << endl;
    return 0;
}
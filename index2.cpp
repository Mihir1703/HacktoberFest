#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i > arr[i - 1])
        {
            dp[i] |= dp[i - arr[i-1] - 1];
        }
        if (dp[i - 1] and i + arr[i-1] <= n)
        {
            dp[i + arr[i-1]] = 1;
        }
    }
    cout << (!dp[n] ? "NO" : "YES") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
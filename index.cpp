#include <bits/stdc++.h>
using namespace std;

bool status;
int checkTree(vector<int> &arr, int l, int r)
{
    if (l == r)
        return 0;
    if (l == r - 1)
    {
        if (arr[l] > arr[r])
        {
            return 1;
        }
        return 0;
    }
    int mid = l + (r - l + 1) / 2;
    int mxa = *max_element(arr.begin() + l, arr.begin() + mid), mxb = *max_element(arr.begin() + mid, arr.begin() + r + 1);
    int mna = *min_element(arr.begin() + l, arr.begin() + mid), mnb = *min_element(arr.begin() + mid, arr.begin() + r + 1);
    if (mnb >= mxa)
    {
        return (checkTree(arr, l, mid - 1) + checkTree(arr, mid, r));
    }
    else if (mna >= mxb)
    {
        return (1 + checkTree(arr, l, mid - 1) + checkTree(arr, mid, r));
    }
    else
    {
        status = false;
        return 0;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;
    status = true;
    int ans = checkTree(arr, 0, n - 1);
    if (!status)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
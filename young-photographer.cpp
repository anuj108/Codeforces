#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, x;
    cin >> n >> x;
    int a, b;
    int temp;
    int left = INT_MIN, right = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            temp = b;
            b = a;
            a = temp;
        }
        if (a > left)
        {
            left = a;
        }
        if (b < right)
        {
            right = b;
        }
    }
    if (left <= right)
    {
        if (x < left)
        {
            cout << left - x;
        }
        else if (x > right)
        {
            cout << x - right;
        }
        else
        {
            cout << 0;
        }
    }
    else
        cout << -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

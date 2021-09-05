#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int value, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }
    bool b = true;
    while (true)
    {
        b = true;
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] > v[i])
            {
                v[i + 1] = v[i + 1] - v[i];
                b = false;
            }
        }
        if (b)
        {
            break;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + v[i];
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
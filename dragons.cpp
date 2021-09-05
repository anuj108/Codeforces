#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int s, n, x, y;
    cin >> s >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    int flag = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) 
    {
        if (v[i].first < s)
        {
            s = s + v[i].second;
            flag = 1;
        }
        else
        {
            cout << "NO\n";
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
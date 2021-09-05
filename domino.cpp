#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, value1, value2;
    cin >> n;
    vector<pair<int, int>> v;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> value1;
        cin >> value2;
        v.push_back({value1, value2});
        sum1 += value1;
        sum2 += value2;
    }
    int flag = 0;
    if (sum1 % 2 == 0 && sum2 % 2 == 0)
    {
        cout << 0;
    }
    else if (sum1 % 2 != 0 && sum2 % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if ((v[i].first % 2 == 0 && v[i].second % 2 != 0 || v[i].first % 2 != 0 && v[i].second % 2 == 0) && n > 1)
            {
                cout << 1;
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (!flag)
            cout << -1;
    }
    else
    {
        cout << -1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
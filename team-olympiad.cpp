#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, k;
    cin >> n;
    vector<int> v1, v2, v3;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k == 1)
        {
            v1.push_back(i);
        }
        if (k == 2)
        {
            v2.push_back(i);
        }
        if (k == 3)
        {
            v3.push_back(i);
        }
    }
    int s1, s2, s3;
    s1 = v1.size();
    s2 = v2.size();
    s3 = v3.size();
    int ans = min(min(s1, s2), s3);
    if (ans == 0)
    {
        cout << 0;
        return;
    }
    cout << ans << "\n";
    for (int i = 0; i < ans; i++)
    {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
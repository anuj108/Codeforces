#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int k, l;
    cin >> k >> l;
    int ans = k;
    int flag = 0;
    while (ans != l)
    {
        if (l % ans != 0)
        {
            break;
        }
        ans = ans * k;
        flag++;
    }
    if (ans == l)
    {
        cout << "YES\n"
             << flag;
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
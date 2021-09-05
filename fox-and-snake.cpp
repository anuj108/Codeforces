#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            cout << "#";
        }
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 != 0)
            {
                cout << "#";
            }
            else
            {
                if (j < m)
                {
                    cout << ".";
                }
            }
        }
        if ((i - 2) % 4 == 0)
        {
            cout << "#";
        }
        cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
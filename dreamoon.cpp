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
    int move = n / 2 + n % 2;
    bool b = true;
    while (move <= n)
    {

        if (move % m == 0)
        {
            cout << move;
            return;
        }
        move++;
    }
    cout << -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
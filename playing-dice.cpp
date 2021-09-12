#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int a, b;
    cin >> a >> b;
    int ca = 0, cb = 0, cd = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(i - a) < abs(i - b))
        {
            ca++;
        }
        else if (abs(i - a) > abs(i - b))
        {
            cb++;
        }
        else
        {
            cd++;
        }
    }
    cout << ca << " " << cd << " " << cb;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int n_spe = n / m;
    int remain = n % m;
    int total = n_spe * b + remain * a;
    int total1 = (n_spe + 1) * b;
    int total2 = n * a;
    cout << min(min(total1, total2), total);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
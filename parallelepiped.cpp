#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int l, b, h;
    double a, d, c;
    cin >> l >> b >> h;
    a = sqrt(l * b / h);
    d = sqrt(h * l / b);
    c = sqrt(h * b / l);
    int sum = a + d + c;
    cout << 4 * sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
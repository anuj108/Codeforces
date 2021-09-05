#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int x1, x2, y1, y2, x3, x4, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int side;
    if (y1 == y2)
    {
        side = abs(x1 - x2);
        x3 = x2;
        x4 = x1;
        y3 = side + (y1);
        y4 = side + (y2);
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if (x1 == x2)
    {
        side = abs(y1 - y2);
        y4 = y1;
        y3 = y2;
        x3 = side + x2;
        x4 = side + x1;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if (abs(x1 + y2) == abs(y1 + x2))
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }
    else if (abs(x1 + y1) == abs(y2 + x2))
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
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
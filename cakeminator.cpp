#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int r, c;
    cin >> r >> c;
    set<int> a, b;
    char key;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> key;
            if (key == 'S')
            {
                a.insert(i);
                b.insert(j);
            }
        }
    }
    cout << r * c - (a.size() * b.size());
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
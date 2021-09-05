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
    int l;
    if (n > m)
    {
        l = n;
    }
    else
    {
        l = m;
    }
    int count = 0;
    for (int a = 0; a <= l; a++)
    {
        for (int b = 0; b <= l; b++)
        {
            if (((a * a) + b) == n)
            {
                if ((a + (b * b)) == m)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
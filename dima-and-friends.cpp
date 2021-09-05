#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int fr;
    cin >> fr;
    int res;
    int sum = 0, values;
    int count = 0;
    int temp = 0;
    for (int i = 0; i < fr; i++)
    {
        cin >> values;
        sum = sum + values;
    }
    for (int i = 1; i <= 5; i++)
    {
        res = sum + i;
        if ((res - 1) % (fr + 1) != 0)
        {
            count++;
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
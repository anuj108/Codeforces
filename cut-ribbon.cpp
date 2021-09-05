#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n;
    int a, b, c;
    cin >> n >> a >> b >> c;
    if (a + b + c == n)
    {
        cout << 3;
        return;
    }
    else if (a + b == n || a + c == n || b + c == n)
    {
        cout << 2;
        return;
    }
    int m;
    int temp = n;
    int count = 1;
    while (temp)
    {
        temp = temp % a;
        if (temp != 0)
        {
            temp = n - a - temp;
            count++;
        }
        temp = temp % b;
        if (temp != 0)
        {
            temp = n - b - temp;
            count++;
        }
        temp = temp % c;
        if (temp != 0)
        {
            temp = n - c - temp;
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
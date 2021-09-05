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
    cin >> n;
    int arr[n];
    int c1 = 0, c2 = 0;
    int loc1, loc2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            c1++;
            loc1 = i;
        }
        else
        {
            c2++;
            loc2 = i;
        }
    }
    
    if (c1 < c2)
    {
        cout << loc1 + 1;
    }
    else
    {
        cout << loc2 + 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
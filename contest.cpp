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
    int sum = 0;
    int count = 0;
    int flag = -1;
    int ans[n] = {0};
    ans[0] = 1;
    if (n >= 9)
    {
        sum = 9;
        count = 3;
        ans[0]={1};
        ans[1]={3};
        ans[2]={5};
        for (int i = 3; i < n; i++)
        {
            if (sum < n)
            {
                cout << sum;
                ans[i]=ans[i]+2;
                sum=sum+ans[i];
                count++;
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
    int t;
    cin >> t;
    while (t--)
        solve();
}
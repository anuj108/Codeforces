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
    int arr[7];
    int sum = 0;
    int temp;
    int ans, comp = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    if (sum >= n)
    {
        for (int i = 0; i < 7; i++)
        {
            comp = comp + arr[i];
            if (comp >= n)
            {
                ans = i + 1;
                break;
            }
        }
    }
    else
    {
        temp = n % sum;
        if(temp==0)
        {
            temp=n/2;
        }
        for (int i = 0; i < 7; i++)
        {
            if (sum != 1)
            {
                comp = comp + arr[i];
                if (comp >= temp)
                {
                    ans = i + 1;
                    break;
                }
            }
            else
            {
                if (arr[i] == 1)
                {
                    ans = i + 1;
                    break;
                }
            }
        }
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
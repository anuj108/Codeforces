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
    int arr[n][2];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        int countr = 0, countl = 0, countu = 0, countd = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][0] == arr[j][0])
            {
                if (arr[i][1] < arr[j][1])
                {
                    countr++;
                }
                if (arr[i][1] > arr[j][1])
                {
                    countl++;
                }
            }
            else if (arr[i][1] == arr[j][1])
            {
                if (arr[i][0] < arr[j][0])
                {
                    countu++;
                }
                if (arr[i][0] > arr[j][0])
                {
                    countd++;
                }
            }
        }
        if (countl > 0 && countr > 0 && countu > 0 && countd > 0)
        {
            res++;
        }
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
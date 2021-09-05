#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int count = 0;
    int k, arr[12];
    int t_sum = 0;
    cin >> k;
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
        t_sum = t_sum + arr[i];
    }
    int temp;
    for (int i = 0; i < 11; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int sum = 0;
    int i = 0;
    // cout << t_sum << " " << k << "\n";
    if (t_sum >= k)
    {
        while (sum < k)
        {
            sum = sum + arr[i];
            i++;
            count++;
        }
        cout << count;
    }
    else
        cout << -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
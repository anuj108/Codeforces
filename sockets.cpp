#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, m, k, value;
    cin >> n >> m >> k;
    vector<int> arr;
    int key = k, flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    if (k >= m)
    {
        cout << 0;
        return;
    }
    else
    {
        int i = 0;
        int socket = k;
        while (true)
        {
            if (k > 0)
            {
                if (i < n)
                {
                    socket = socket - 1 + arr[i];
                    k--;
                    i++;
                }
                else
                {
                    cout << -1;
                    break;
                }
            }
            else if (k == 0)
            {
                if (i < n)
                {
                    socket = socket - 1 + arr[i];
                    i++;
                }
                else
                {
                    cout << -1;
                    break;
                }
            }
            if (socket >= m)
            {
                cout << i;
                break;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
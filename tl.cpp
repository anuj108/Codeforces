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
    vector<int> v1, v2;
    int values;
    for (int i = 0; i < n; i++)
    {
        cin >> values;
        v1.push_back(values);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> values;
        v2.push_back(values);
    }
    int min = *min_element(v2.begin(), v2.end());
    int min1 = *min_element(v1.begin(), v1.end());
    int max1 = *max_element(v1.begin(), v1.end());
    if (min < max1)
    {
        cout << -1;
        return;
    }
    else
    {
        int flag = 0;
        for (int i = max1; i < min; i++)
        {
            if (i / min1 >= 2)
            {
                cout << i;
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (!flag)
        {
            cout << -1;
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
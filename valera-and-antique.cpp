#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, v;
    cin >> n >> v;
    int value, k, c = 0;
    vector<int> v1;
    bool b = false;
    for (int i = 0; i < n; i++)
    {
        b = false;
        cin >> value;
        int arr[value];
        for (int j = 0; j < value; j++)
        {
            cin >> arr[j];
            if (arr[j] < v)
            {
                b = true;
            }
        }
        if (b)
        {
            c++;
            v1.push_back(i + 1);
        }
    }
    cout << c << "\n";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
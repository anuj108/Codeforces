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
    int arr[n][4];
    int max = INT_MIN;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    // cin >> arr[0][0];
    // cin >> arr[0][1];
    // cin >> arr[0][2];
    // cin >> arr[0][3];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
        cin >> arr[i][2];
        cin >> arr[i][3];
        if (max < arr[i][0] && max1 < arr[i][1] && max2 < arr[i][2])
        {
            max = arr[i][0];
            max1 = arr[i][1];
            max2 = arr[i][2];
        }
    }
    
    int min = INT_MAX;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (max > arr[i][0] && max1 > arr[i][1] && max2 > arr[i][2])
        {
            continue;
        }
        else
        {
            if (min > arr[i][3])
            {
                min = arr[i][3];
                index = i;
            }
        }
    }
    cout << index + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
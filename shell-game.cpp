#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, x, y;
    int arr[] = {1, 2, 3};
    int a[3][2];
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    int pos = n;
    //swapping
    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = arr[a[i][0] - 1];
        arr[a[i][0] - 1] = arr[a[i][1] - 1];
        arr[a[i][1] - 1] = temp;
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == pos)
            cout << i + 1;
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
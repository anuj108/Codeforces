#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// const int Num = 3e5;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 2; i < n; i + 3)
    {
        if (arr[i] < k)
        {
            count++;
        }
        else
            break;
    }
    cout << count;
}

int main()
{
    fastIO();
    solve();

    return 0;
}

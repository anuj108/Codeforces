#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 3e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve(int arr[])
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    count = a;
    int temp = arr[a];
    if (temp == b)
        cout << count << "\n";
    else if ((temp ^ b) == a)
    {
        cout << count + 2 << "\n";
    }
    else
    {
        cout << count + 1 << "\n";
    }
    // if(mex>=2)
    // {
    //     if(Xor==1)
    //     {
    //         cout<<count<<"\n";
    //     }
    //     else if(Xor!=1)
    //     {
    //         count++;
    //         cout<<count<<"\n";
    //     }

    // }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, arr[MAX_N];
    cin >> t;
    for (int i = 1; i < MAX_N; i++)
    {
        arr[i] = (i - 1) ^ arr[i - 1];
    }
    while (t--)
        solve(arr);
}
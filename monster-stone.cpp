#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    long long ar1[n];
    long long ar2[n];
    for (long long i = 1; i <= n; i++)
    {
        cin >> arr[i];
        ar1[i] = arr[i] + ar1[i - 1];
    }
    sort(arr + 1, arr + n + 1);
    for (long long i = 1; i <= n; i++)
    {
        ar2[i] = arr[i] + ar2[i - 1];
    }
    long long m;
    cin >> m;
    sort(arr, arr + n);
    for (long long i = 0; i < m; i++)
    {
        long long sum = 0;
        long long type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            sum = ar1[r] - ar1[l - 1];
            cout << sum << "\n";
        }
        else
        {
            sum = ar2[r] - ar2[l - 1];
            cout << sum << "\n";
        }
    }

    return 0;
}
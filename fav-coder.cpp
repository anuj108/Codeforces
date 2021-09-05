#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = 10000, max = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            if (max < a[j])
            {
                max = a[j];
                // cout << max << "max";
            }
            if (min > a[j + 1])
            {
                min = a[j + 1];
                // cout << min << "min";
                count++;
            }
        }
        else if (a[j] < a[j + 1])
        {
            if (max < a[j + 1])
            {
                max = a[j + 1];
                // cout << max << "max";
                count++;
            }
            if (min > a[j])
            {
                min = a[j];
                // cout << min << "min";
            }
        }
    }
    cout << count;
    return 0;
}
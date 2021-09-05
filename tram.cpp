#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int arr[n][2];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum - arr[i][0];
        sum = sum + arr[i][1];
        if (sum > max)
            max = sum;
    }
    cout << max;
    return 0;
}
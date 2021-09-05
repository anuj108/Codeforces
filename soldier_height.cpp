#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0, min = 100;
    int max_ind, min_ind;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            max_ind = j;
        }
        if (arr[j] <= min)
        {
            min = arr[j];
            min_ind = j;
        }
    }
    if (arr[0] == arr[max_ind] && arr[n - 1] == arr[min_ind])
    {
        cout << 0;
    }
    else if (min_ind > max_ind)
    {
        cout << n - (min_ind + 1) + (1 + max_ind) - 1;
    }
    else
    {
        cout << n - (min_ind + 1) + (max_ind + 1) - 1 - 1;
    }
    return 0;
}
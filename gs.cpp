#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr, b, c;
        cin >> arr >> b >> c;
        int count = 0;
        int sec = b, third = 1 + c;
        int j = sec * b;
        int k = sec + c;
        int l = third * b;
        int m = third + c;
        int arr[7] = {1, sec, third, j, k, l, m};
        sort(0, 7);
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i];
        }
    }
    return 0;
}
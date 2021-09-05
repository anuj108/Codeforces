#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int c1 = 0, c2 = 0;
    int arr[n][2];
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
        for (int j = 0; j < 2; j++)
        {
            if (j == 0 && arr[i][j] == 0)
            {
                c1++;
            }
            else if (j == 1 && arr[i][j] == 0)
            {
                c2++;
            }
        }
    }
    if (c1 > (n - c1))
    {
        result = result + n - c1;
    }
    else
        result = result + c1;
    if (c2 > (n - c2))
    {
        result = result + n - c2;
    }
    else
        result = result + c2;

    cout << result;
    return 0;
}
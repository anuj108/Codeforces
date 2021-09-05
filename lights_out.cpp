#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int arr[3][3];
    int r, c, temp;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 1)
            {
                a[i][j] = abs(a[i][j] - 1);
                if ((i + 1) >= 0 && (i + 1) <= 2)
                {
                    a[i + 1][j] = abs(a[i + 1][j] - 1);
                }
                if ((j + 1) >= 0 && (j + 1) <= 2)
                {
                    a[i][j + 1] = abs(a[i][j + 1] - 1);
                }
                if ((i - 1) >= 0 && (i - 1) <= 2)
                {
                    a[i - 1][j] = abs(a[i - 1][j] - 1);
                }
                if ((j - 1) >= 0 && (j - 1) <= 2)
                {
                    a[i][j - 1] = abs(a[i][j - 1] - 1);
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}
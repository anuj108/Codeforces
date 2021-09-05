#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int arr[5][5];
    int r, c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j]; //input
            if (arr[i][j] == 1)
            {
                r = i + 1;
                c = j + 1;
            }
        }
    }
    int r_d = abs(3 - r);
    int c_d = abs(3 - c);
    cout << r_d + c_d << "\n";
    return 0;
}
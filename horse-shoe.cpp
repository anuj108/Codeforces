#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int a = 1;
    int count = 0;
    int arr[4];
    arr[0] = s1;
    arr[1] = s2;
    arr[2] = s3;
    arr[3] = s4;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (arr[i] == arr[j + 1])
            {
                count++;
                break;
            }
        }
        if (count == 3)
            break;
    }
    cout << count;
    return 0;
}
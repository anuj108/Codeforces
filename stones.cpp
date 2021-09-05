#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string c;
    cin >> c;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == c[i + 1])
            count++;
    }
    cout << count;
    return 0;
}
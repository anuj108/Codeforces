#include <iostream>
using namespace std;
int main()
{
    string s, new_s = "";
    cin >> s;
    int c1 = 0, c2 = 0, c3 = 0;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            c1++;
        if (s[i] == '2')
            c2++;
        if (s[i] == '3')
            c3++;
    }
    count = c1 + c2 + c3;
    int arr[count];
    for (int i = 0; i < c1; i++)
    {
        arr[i] = 1;
    }
    for (int i = c1; i < c2 + c1; i++)
    {
        arr[i] = 2;
    }
    for (int i = c2 + c1; i < count; i++)
    {
        arr[i] = 3;
    }
    for (int i = 0; i < count - 1; i++)
    {
        cout << arr[i] << "+";
    }
    cout << arr[count - 1];
    return 0;
}
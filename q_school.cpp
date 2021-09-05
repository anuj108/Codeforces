#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    char c[n];
    char ch[n];
    char temp;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int index = 0;
    for (int j = 0; j < t; j++)
        for (int i = 0; i < n; i++)
        {

            if (c[i] == 'B' && c[i + 1] == 'G')
            {
                temp = c[i];
                c[i] = c[i + 1];
                c[i + 1] = temp;
            }
            else
            {
                continue;
            }
            i++;
        }
    for (int i = 0; i < n; i++)
    {
        cout << c[i];
    }
    return 0;
}
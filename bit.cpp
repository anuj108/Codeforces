#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == '+' || s[1] == '+')
        {
            res++;
        }
        else
            res--;
    }
    cout << res;
    return 0;
}
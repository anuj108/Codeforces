#include <iostream>
using namespace std;

int main()
{

    int s;
    cin >> s;

    int y = s + 1;
    // char b,c;
    int b = 0;
    for (int a = y; a < 10000; a++)
    {
        string t = to_string(a);
        for (int i = 0; i < 4; i++)
        {
            b = 0;
            for (int j = i + 1; j < 4; j++)
            {

                if (t[i] == t[j])
                {
                    b = 1;
                    break;
                }
            }
            if (b == 1)
                break;
        }
        if (b == 0)
        {
            cout << a;
            break;
        }
    }

    return 0;
}
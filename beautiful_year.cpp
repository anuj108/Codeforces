#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    int flag = 0;
    for (int j = year + 1; j < 9000; j++)
    {
        int i=j;
        while (i > 0)
        {
            int remain = i % 10;
            cout<<remain<<"\n";
            i = i / 10;
            int sec_last = i % 10;
            cout<<
            if (remain == sec_last)
            {
                flag == 1;
                break;
            }
        }
        if (flag != 1)
        {
            cout << j;
            break;
        }
    }
    return 0;
}
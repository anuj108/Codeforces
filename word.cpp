#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string ch;
    cin >> ch;
    int u = 0, l = 0;
    for (int i = 0; i < ch.length(); i++)
    {
        if (ch[i] >= 65 && ch[i] <= 90)
            u++;
        else
            l++;
    }
    for (int i = 0; i < ch.length(); i++)
    {
        if (u > l)
        {
            putchar(toupper(ch[i]));
        }
        else
            putchar(tolower(ch[i]));
    }
    return 0;
}
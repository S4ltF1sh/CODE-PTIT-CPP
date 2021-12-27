#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char c;
    int t, tmp;
    cin >> t;
    while (t--)
    {
        int Cnt1 = 0, Cnt2 = 0, Cnt = 0;
        while (cin >> tmp)
        {
            Cnt++;
            if (tmp % 2 == 0)
                Cnt2++;
            else
                Cnt1++;
            c = getchar();
            if (c == '\n')
                break;
        }
        if (Cnt % 2 == 0 && Cnt2 > Cnt1)
            cout << "YES\n";
        else if (Cnt % 2 != 0 && Cnt1 > Cnt2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
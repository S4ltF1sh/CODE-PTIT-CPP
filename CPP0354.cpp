#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string s;
    char tmp;
    int t, Cnt = 1;
    cin >> t;
    while (t--)
    {
        cin >> s;
        tmp = s[0];
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
                Cnt++;
            else
            {
                cout << tmp << Cnt;
                Cnt = 1;
                tmp = s[i];
            }
        }
        cout << tmp << Cnt << endl;
        Cnt = 1;
    }
}
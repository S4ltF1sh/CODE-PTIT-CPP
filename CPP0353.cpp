// ĐIỆN THOẠI CỤC GẠCH
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isTN(string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
void Run()
{
    string s, Res = "";
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
            Res += '2';
        else if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
            Res += '3';
        else if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
            Res += '4';
        else if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
            Res += '5';
        else if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
            Res += '6';
        else if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
            Res += '7';
        else if (s[i] == 't' || s[i] == 'u' || s[i] == 'v')
            Res += '8';
        else
            Res += '9';
    }
    if (isTN(Res))
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        Run();
    }
    return 0;
}
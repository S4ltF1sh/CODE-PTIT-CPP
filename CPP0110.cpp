#include <iostream>
#include <string>
using namespace std;
void Run()
{
    string s, Res = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
            continue;
        if (s[i] == '8' && s[i + 1] == '4' && s[i - 1] == '0')
            continue;
        if (s[i] == '4' && s[i - 1] == '8' && s[i - 2] == '0')
            continue;
        Res += s[i];
    }
    cout << Res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}
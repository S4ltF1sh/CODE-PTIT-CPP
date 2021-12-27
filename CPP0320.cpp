//SỐ ĐẦY ĐỦ
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int Check(string s)
{
    vector<bool> Checker(15, false);
    if (s[0] == '0')
        return 3;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return 3;
        Checker[s[i] - '0'] = true;
    }
    for (int i = 0; i <= 9; i++)
        if (Checker[i] == false)
            return 2;
    return 1;
}
void Run()
{
    string s;
    cin >> s;
    if (Check(s) == 1)
        cout << "YES\n";
    else if (Check(s) == 2)
        cout << "NO\n";
    else if (Check(s) == 3)
        cout << "INVALID\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}
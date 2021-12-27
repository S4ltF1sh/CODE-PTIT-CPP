//LIỆT KÊ XÂU NHỊ PHÂN
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
void Init(string &s, int n)
{
    for (int i = 0; i < n; i++)
        s.push_back('0');
}
void Output(string s)
{
    cout << s << " ";
}
void set_0(string &s, int j)
{
    for (; j < s.length(); j++)
        s.at(j) = '0';
}
void Sinh(string &s)
{
    for (int j = s.length() - 1; j >= 0; j--)
    {
        if (s.at(j) == '0')
        {
            s.at(j) = '1';
            set_0(s, j + 1);
            Output(s);
            break;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        Init(s, n);
        Output(s);
        for (int i = 1; i < pow(2, n); i++)
        {
            Sinh(s);
        }
        cout << "\n";
    }
}
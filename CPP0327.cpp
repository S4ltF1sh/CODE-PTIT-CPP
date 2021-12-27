//CHIA HẾT CHO 5
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string AddBigNum(string a, string b)
{
    string Res = "";
    while (a.length() > b.length())
        b = "0" + b;
    while (a.length() < b.length())
        a = "0" + a;
    int Carry = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int tmp = a[i] - 48 + b[i] - 48 + Carry;
        Carry = tmp / 10;
        tmp %= 10;
        Res = (char)(tmp + 48) + Res;
    }
    if (Carry > 0)
        Res = "1" + Res;
    return Res;
}
void Run()
{
    string s, Res, POW = "2";
    cin >> s;
    int len = s.length();
    if (s.at(len - 1) == '0')
        Res = "0";
    else
        Res = "1";
    for (int i = s.length() - 2; i >= 0; i--)
    {
        if (s.at(i) == '1')
            Res = AddBigNum(Res, POW);
        POW = AddBigNum(POW, POW);
    }
    if (Res.at(Res.length() - 1) == '0' || Res.at(Res.length() - 1) == '5')
        cout << "Yes\n";
    else
        cout << "No\n";
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
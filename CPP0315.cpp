#include <iostream>
#include <string>
using namespace std;
bool Check(string &s)
{
    int Ind = s.length() - 1;
    while (Ind > 0 && s[Ind - 1] <= s[Ind])
        Ind--;
    if (Ind == 0)
        return false;
    int Ind2 = Ind;
    char tmp = s[Ind];
    for (int i = Ind + 1; i < s.length(); i++)
    {
        //doi voi so lon nhat va be hon s[Ind - 1]
        if (s[i] > tmp && s[i] < s[Ind - 1])
        {
            Ind2 = i;
            tmp = s[i];
        }
    }
    swap(s[Ind2], s[Ind - 1]);
    if (s[0] == '0')
        return false;
    return true;
}
int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (Check(s))
            cout << s << endl;
        else
            cout << -1 << endl;
    }
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string Six(string &s1)
{
    int Len1 = s1.size();
    for (int i = 0; i < Len1; i++)
    {
        if (s1.at(i) == '5')
        {
            s1.at(i) = '6';
        }
    }
    return s1;
}
string Five(string &s1)
{
    int Len1 = s1.size();
    for (int i = 0; i < Len1; i++)
    {
        if (s1.at(i) == '6')
        {
            s1.at(i) = '5';
        }
    }
    return s1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        cout << stoll(Five(s1)) + stoll(Five(s2)) << " " << stoll(Six(s1)) + stoll(Six(s2)) << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
bool Check(string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s.at(i) != s.at(j))
            return false;
        if ((s.at(i) - '0') % 2 != 0 && (s.at(i) - '0') % 2 != 0)
            return false;
        i++;
        j--;
    }
    return true;
}
void Run()
{
    string s;
    cin >> s;
    if (Check(s))
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        Run();
}
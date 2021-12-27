#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Run()
{
    long long Res = -1;
    string s, tmp = "";
    cin >> s;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (tmp != "")
            {
                Res = max(Res, stoll(tmp));
                tmp = "";
            }
        }
        else
        {
            tmp += s[i];
        }
        i++;
    }
    if (tmp != "")
        Res = max(Res, stoll(tmp));
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
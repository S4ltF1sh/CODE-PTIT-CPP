#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Run()
{
    long long Sum = 0;
    string s, tmp = "";
    cin >> s;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (tmp != "")
            {
                Sum += stoll(tmp);
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
        Sum += stoll(tmp);
    cout << Sum << endl;
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
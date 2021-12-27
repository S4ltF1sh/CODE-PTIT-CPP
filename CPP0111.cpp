#include <iostream>
#include <string>
using namespace std;
void Run()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++)
    {
        if (abs(s.at(i) - s.at(i - 1)) != 1)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
void Run()
{
    string s;
    cin >> s;
    if (s.length() < 2)
    {
        cout << 0 << endl;
        return;
    }
    if (s.at(s.length() - 1) == '6' && s.at(s.length() - 2) == '8')
        cout << 1 << endl;
    else
        cout << 0
             << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        Run();
    }
}
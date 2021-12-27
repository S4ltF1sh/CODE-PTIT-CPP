#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run(string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            cout << "NO\n";
            return;
        }
        i++;
        j--;
    }
    cout << "YES\n";
}
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        Run(s);
    }
}
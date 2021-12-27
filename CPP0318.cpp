//BIỂN SỐ ĐẸP
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    string s;
    getline(std::cin, s);
    if (s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10])
        cout << "YES\n";
    else if (s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10])
        cout << "YES\n";
    else if (s[5] == s[6] && s[6] == s[7] && s[9] == s[10])
        cout << "YES\n";
    else if ((s[5] == '6' || s[5] == '8') && (s[6] == '6' || s[6] == '8') && (s[7] == '6' || s[7] == '8') && (s[9] == '6' || s[9] == '8') && (s[10] == '6' || s[10] == '8'))
        cout << "YES\n";
    else
        cout << "NO\n";
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
    return 0;
}
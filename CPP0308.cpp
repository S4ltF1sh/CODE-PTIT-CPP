#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Run()
{
    vector<int> Checker(300, 0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s.at(i) >= 'A' && s.at(i) <= 'Z')
            Checker.at(s.at(i))++;
    for (int i = 0; i < s.length(); i++)
        if (Checker.at(s.at(i)) == 1)
            cout << s.at(i);
    cout << endl;
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
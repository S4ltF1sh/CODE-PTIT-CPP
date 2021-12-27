#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Run()
{
    vector<int> Checker(300, 0);
    string s;
    int k, Cnt = 0;
    cin >> s >> k;
    for (int i = 0; i < s.length(); i++)
        if (s.at(i) >= 'a' && s.at(i) <= 'z')
            Checker.at(s.at(i))++;
    for (char i = 'a'; i <= 'z'; i++)
        if (Checker.at(i) == 0)
            Cnt++;
    if (Cnt <= k)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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
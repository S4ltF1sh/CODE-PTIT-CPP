#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Run()
{
    string s;
    cin >> s;
    int Cnt = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s.at(i) == s.at(j))
                Cnt++;
        }
    }
    cout << Cnt << endl;
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
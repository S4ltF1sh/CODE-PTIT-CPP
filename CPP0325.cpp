//CHIA HẾT CHO 11
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Run()
{
    string s;
    long long Sum_Le = 0, Sum_Chan = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
            Sum_Le += s.at(i) - '0';
        else
            Sum_Chan += s.at(i) - '0';
    }
    if (abs(Sum_Chan - Sum_Le) % 11 == 0)
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
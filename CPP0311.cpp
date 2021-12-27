//SẮP ĐẶT XÂU KÝ TỰ - 1
#include <iostream>
using namespace std;

void Run()
{
    int Tanso[300] = {0}, Max = -1;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        Tanso[s[i]]++;
        if (Tanso[s[i]] > Max)
            Max = Tanso[s[i]];
    }
    if (Max <= (s.length() + 1) / 2)
        cout << 1 << "\n";
    else
        cout << 0 << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}
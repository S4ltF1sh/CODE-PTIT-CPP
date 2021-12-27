//ĐẾM XÂU CON
#include <iostream>
#include <vector>
#include <deque>
#include <map>
using namespace std;
void Run()
{
    string s;
    int k, Res = 0;
    cin >> s >> k;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        map<char, int> Checker;
        int Cnt = 0;
        for (int j = i; j < n; j++)
        {
            Checker[s[j]]++;
            if (Checker[s[j]] == 1)
                Cnt++;
            if (Cnt == k)
                Res++;
            if (Cnt > k)
                break;
        }
    }
    cout << Res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}
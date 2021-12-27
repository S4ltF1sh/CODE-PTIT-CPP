#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Run()
{
    int Sum = 0;
    vector<int> TanSo(300, 0);
    string s;
    cin >> s;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            TanSo[s[i]]++;
        }
        else
        {
            Sum += (s[i] - '0');
        }
        i++;
    }
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (TanSo[i] > 0)
        {
            while (TanSo[i] > 0)
            {
                cout << i;
                TanSo[i]--;
            }
        }
    }
    cout << Sum << endl;
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
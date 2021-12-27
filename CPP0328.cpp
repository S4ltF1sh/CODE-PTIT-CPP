//CHIA HẾT CHO 8
#include <iostream>
#include <string>
using namespace std;
int Count(string s, int k)
{
    int Cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int n = 0;
        for (int j = i; j < s.size(); j++)
        {
            n = (n * 10 + s[j] - '0') % k;
            if (n == 0)
                Cnt++;
        }
    }
    return Cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Count(s, 8) - Count(s, 24) << endl;
    }
}
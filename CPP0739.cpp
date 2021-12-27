#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Run()
{
    string s;
    vector<int> Res;
    cin >> s;
    int tmp = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'D')
        {
            if (i == 0 || s[i - 1] == 'I')
                Res.push_back(++tmp);
            Res.push_back(++tmp);
        }
        else
        {
            while (Res.size() != 0)
            {
                cout << Res[Res.size() - 1];
                Res.pop_back();
            }
            if (i == 0)
                cout << ++tmp;
            if (s[i + 1] != 'D')
                cout << ++tmp;
        }
    }
    while (Res.size() != 0)
    {
        cout << Res[Res.size() - 1];
        Res.pop_back();
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Run();
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isExist(vector<string> S, string tmp)
{
    for (int i = 0; i < S.size(); i++)
        if (S[i] == tmp)
            return true;
    return false;
}
void Init(vector<string> &S)
{
    char c;
    string tmp;
    while (cin >> tmp)
    {
        if (!isExist(S, tmp))
            S.push_back(tmp);
        c = getchar();
        if (c == '\n')
            break;
    }
}
void Run()
{
    vector<string> S1, S2;
    Init(S1);
    Init(S2);
    for (int i = 0; i < S2.size(); i++)
    {
        for (int j = 0; j < S1.size(); j++)
        {
            if (S1[j] == S2[i])
                S1[j] = "";
        }
    }
    sort(S1.begin(), S1.end());
    for (int i = 0; i < S1.size(); i++)
        if (S1[i] != "")
            cout << S1[i] << " ";
    cout << endl;
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
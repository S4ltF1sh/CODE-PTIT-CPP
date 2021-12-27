#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
bool cmp(string a, string b)
{
    return a.length() < b.length();
}
int main()
{
    int n, Res = 0;
    cin >> n;
    string tmp;
    vector<string> Data;
    map<string, int> TanSo;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        TanSo[tmp]++;
        if (TanSo[tmp] == 1)
            Data.push_back(tmp);
    }
    
    for (int i = 0; i < Data.size(); i++)
        Res += TanSo[Data[i]] * (TanSo[Data[i]] - 1);
    sort(Data.begin(), Data.end(), cmp);

    for (int i = 0; i < Data.size() - 1; i++)
    {
        for (int j = i + 1; j < Data.size(); j++)
        {
            if (Data[j].find(Data[i], 0) != -1)
                Res += TanSo[Data[i]] * TanSo[Data[j]];
        }
    }
    cout << Res;
}

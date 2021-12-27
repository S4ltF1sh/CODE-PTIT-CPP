//SẮP XẾP THEO SỐ LẦN XUẤT HIỆN
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
void Run()
{
    map<int, int> DATA;
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        DATA[tmp]++;
    }
    
    vector<pair<int, int>> Res;
    for (auto &it : DATA)
    {
        Res.push_back(it);
    }
    sort(Res.begin(), Res.end(), cmp);
    
    for (auto &it : Res)
    {
        while (it.second > 0)
        {
            cout << it.first << " ";
            it.second--;
        }
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}
//ĐẾM PHẦN TỬ GIỐNG NHAU
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
void Run()
{
    int n, tmp, Cnt = 0;
    cin >> n;
    vector<vector<int>> Tanso(1e5 + 2);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> tmp;
            int len = Tanso[tmp].size();
            if (len != 0)
            {
                if (Tanso[tmp][len - 1] != i)
                    Tanso[tmp].push_back(i);
            }
            else
                Tanso[tmp].push_back(i);
        }
    }
    for (int i = 1; i <= 1e5; i++)
    {
        if (Tanso[i].size() == n)
            Cnt++;
    }
    cout << Cnt << "\n";
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
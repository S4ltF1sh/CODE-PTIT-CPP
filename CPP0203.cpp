//SỐ NHỎ NHẤT CHƯA XUẤT HIỆN
#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    int n, tmp;
    vector<bool> Checker(1e6 + 1, false);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp > 0)
            Checker.at(tmp) = true;
    }
    for (int i = 1; i < 1e6 + 1; i++)
        if (Checker.at(i) == false)
        {
            cout << i << "\n";
            return;
        }
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
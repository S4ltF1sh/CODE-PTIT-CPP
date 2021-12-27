//SẮP ĐẶT DÃY SỐ
#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    vector<bool> Checker(1e7 + 5, false);
    int n;
    long long tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp >= 0 && tmp <= 1e7)
            Checker.at(tmp) = true;
    }
    for (int i = 0; i < n; i++)
        if (Checker.at(i) == true)
            cout << i << " ";
        else
            cout << -1 << " ";
    cout << endl;
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
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void Run()
{
    vector<int> Arr;
    vector<int> Checker(1e6, 0);
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        Checker.at(Arr.at(i))++;
        if (Checker.at(Arr.at(i)) > 1)
        {
            cout << Arr.at(i) << endl;
            return;
        }
    }
    cout << -1 << endl;
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
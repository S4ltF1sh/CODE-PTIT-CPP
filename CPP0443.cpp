#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Run()
{
    int n, tmp;
    vector<bool> Checker(1e7 + 1, false);
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> tmp;
        Checker.at(tmp) = true;
    }
    for (int i = 1; i < 1e7 + 1; i++)
    {
        if (Checker.at(i) == false)
        {
            cout << i << endl;
            return;
        }
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
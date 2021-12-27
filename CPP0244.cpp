#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    vector<int> Checker(1e3 + 1, 0);
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Checker.at(tmp)++;
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (Checker.at(i) >= 1)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int t = 1;
    while (t--)
    {
        Run();
    }
}
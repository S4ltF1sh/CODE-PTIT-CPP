#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Run()
{
    int n, X, tmp;
    vector<int> Arr;
    cin >> n >> X;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        if (Arr.at(i) == X)
        {
            cout << i + 1 << endl;
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
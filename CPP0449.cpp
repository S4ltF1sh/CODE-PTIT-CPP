#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void Run()
{
    map<int, int> Checker;
    long long n, X;
    cin >> n >> X;
    vector<long long> Arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
        Checker[Arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (Checker[Arr[i] + X] > 0)
        {
            cout << 1 << endl;
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
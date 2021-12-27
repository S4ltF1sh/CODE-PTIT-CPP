#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    int n;
    cin >> n;
    vector<int> Arr(n + 2);
    for (int i = 0; i < n; i++)
        cin >> Arr[i];
    int Res = -1000006, Min = Arr[0];
    for (int i = 1; i < n; i++)
    {
        Res = max(Res, Arr[i] - Min);
        Min = min(Min, Arr[i]);
    }
    if (Res <= 0)
        cout << -1 << endl;
    else
        cout << Res << endl;
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
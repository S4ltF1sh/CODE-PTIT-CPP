#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    long long tmp, Res = 100000007;
    vector<long long> Arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    sort(Arr.begin(), Arr.end());
    for (int i = 1; i < n; i++)
    {
        if (Arr.at(i) - Arr.at(i - 1) < Res)
            Res = Arr.at(i) - Arr.at(i - 1);
    }
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
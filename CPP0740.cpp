#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    vector<long long> Data;
    long long n, tmp, Best = -1e18;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Data.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        long long Mul = 1;
        for (int j = i; j < n; j++)
        {
            Mul *= Data[j];
            Best = max(Mul, Best);
        }
    }
    cout << Best << endl;
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
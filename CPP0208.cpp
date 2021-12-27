//PHẦN TỬ NHỎ NHẤT THỨ K
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    vector<int> Arr;
    int n, k, tmp;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    sort(Arr.begin(), Arr.end());
    cout << Arr.at(k - 1);
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
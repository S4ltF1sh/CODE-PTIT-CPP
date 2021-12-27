#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    vector<int> Arr;
    int n, tmp, Min = 1e6 + 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    sort(Arr.begin(), Arr.end());
    for (int i = 1; i < Arr.size(); i++)
        if (Arr.at(i) - Arr.at(i - 1) < Min)
            Min = Arr.at(i) - Arr.at(i - 1);
    cout << Min << endl;
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
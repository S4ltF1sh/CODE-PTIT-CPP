#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    vector<int> Arr;
    int n, tmp, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    sort(Arr.begin(), Arr.end());
    int j = n - 1;
    while (k--)
    {
        cout << Arr.at(j--) << " ";
    }
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
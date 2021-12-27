//GHÉP DÃY SỐ
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    vector<int> Arr;
    int k, n, tmp;
    cin >> k >> n;
    for (int i = 0; i < n * k; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    sort(Arr.begin(), Arr.end());
    for (int i = 0; i < n * k; i++)
    {
        cout << Arr.at(i) << " ";
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
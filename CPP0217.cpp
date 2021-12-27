#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Run()
{
    vector<int> Data;
    int n, k, tmp;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            Data.push_back(tmp);
        }
    sort(Data.begin(), Data.end());
    cout << Data[k - 1] << endl;
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
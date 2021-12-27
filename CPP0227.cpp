#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void Run()
{
    int n;
    cin >> n;
    vector<vector<int>> Arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> Arr.at(i).at(j);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < n; j++)
                cout << Arr.at(i).at(j) << " ";
        else
            for (int j = n - 1; j >= 0; j--)
                cout << Arr.at(i).at(j) << " ";
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
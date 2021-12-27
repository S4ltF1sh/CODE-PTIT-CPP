#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void Run()
{
    vector<int> Arr;
    int n, tmp, Res = 1e7 + 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (abs(Arr.at(i) + Arr.at(j)) < abs(Res))
                Res = Arr.at(i) + Arr.at(j);
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
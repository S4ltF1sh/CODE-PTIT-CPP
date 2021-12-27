#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int BinarySearch(int Left, int Right, int NeedSearch, vector<int> &Arr)
{
    while (Left <= Right)
    {
        int Pivot = (Left + Right) / 2;
        if (NeedSearch == Arr.at(Pivot))
            return Pivot;
        else if (NeedSearch < Arr.at(Pivot))
            Right = Pivot - 1;
        else
            Left = Pivot + 1;
    }
    return -1;
}
void Run()
{
    int n, X, tmp;
    vector<int> Arr;
    cin >> n >> X;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    int Check = BinarySearch(0, Arr.size() - 1, X, Arr);
    if (Check != -1)
        cout << 1 << endl;
    else
        cout << -1 << endl;
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
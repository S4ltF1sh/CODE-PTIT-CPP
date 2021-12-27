#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct DATA
{
    int Value;
    int Index;
    int Distant;
};
bool cmp(DATA a, DATA b)
{
    if (a.Distant == b.Distant)
        return a.Index < b.Index;
    else
        return a.Distant < b.Distant;
}
void Run()
{
    int n, X;
    cin >> n >> X;
    vector<DATA> Arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i].Value;
        Arr[i].Distant = abs(X - Arr[i].Value);
        Arr[i].Index = i;
    }
    sort(Arr.begin(), Arr.end(), cmp);
    for (int i = 0; i < n; i++)
        cout << Arr[i].Value << " ";
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
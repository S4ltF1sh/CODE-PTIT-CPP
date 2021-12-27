//SỐ LỚN NHẤT CỦA DÃY CON LIÊN TỤC
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
void Show(vector<int> Res, int n)
{
    for (int i = 1; i <= n; i++)
        if (Res[i] != -1)
            cout << Res[i] << " ";
}
void Run()
{
    vector<int> Arr;
    Arr.push_back(-1);
    int n, k, tmp;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        Arr.push_back(tmp);
    }
    vector<int> Res(n + 1, -1);
    deque<int> Check;
    for (int i = 1; i <= n; i++)
    {
        while (!Check.empty() && Arr[Check.back()] <= Arr[i])
            Check.pop_back();
        Check.push_back(i);
        if (Check.front() + k <= i)
            Check.pop_front();
        if (i >= k)
            Res[i] = Arr[Check.front()];
    }
    Show(Res, n);
    cout << "\n";
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
//DÃY CON TRUNG BÌNH LỚN NHẤT
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
void Run()
{
    vector<long long> Data;
    long long n, k, tmp, Current_Sum = 0, Max = -1000006, Start = 0;
    cin >> n >> k;
    for (long long i = 0; i < n; i++)
    {
        cin >> tmp;
        Data.push_back(tmp);
    }
    for (int i = 0; i <= n - k; i++)
    {
        Current_Sum = Data[i];
        for (int j = i + 1; j < i + k; j++)
            Current_Sum += Data[j];
        if (Current_Sum > Max)
        {
            Max = Current_Sum;
            Start = i;
        }
    }
    for (int i = Start; i < Start + k; i++)
        cout << Data[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}


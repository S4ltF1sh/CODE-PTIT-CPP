//DÃY CON TRUNG BÌNH LỚN NHẤT
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
void Run()
{
    deque<long long> Check;
    vector<long long> Data;
    long long n, k, tmp, Current_Sum = 0, Max = -1000006, Current_Start = 0, Start;
    cin >> n >> k;
    for (long long i = 0; i < n; i++)
    {
        cin >> tmp;
        Data.push_back(tmp);
        Check.push_back(tmp);
        Current_Sum += tmp;
        if (Check.size() > k)
        {
            Current_Sum -= Check.front();
            Check.pop_front();
            Current_Start++;
        }
        if (Current_Sum > Max)
        {
            Max = Current_Sum;
            Start = Current_Start;
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
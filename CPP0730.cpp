#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run()
{
    long long tmp, Max = -1, Sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        Sum += tmp;
        if (Sum < 0)
            Sum = 0;
        else if (Sum > Max)
            Max = Sum;
    }
    cout << Max << endl;
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
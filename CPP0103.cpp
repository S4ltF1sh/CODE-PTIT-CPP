#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
void Run(double n)
{
    double Sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        Sum += 1.0 / (i * 1.0);
    }
    cout << setprecision(4) << fixed << Sum << endl;
}
int main()
{
    int t = 1;
    double n;
    while (t--)
    {
        cin >> n;
        Run(n);
    }
}
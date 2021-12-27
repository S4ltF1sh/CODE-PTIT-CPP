#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
void Run(long long n)
{
    long long tmp = 1;
    long long Sum = 1;
    for (long long i = 2; i <= n; i++)
    {
        tmp *= i;
        Sum += tmp;
    }
    cout << Sum;
}
int main()
{
    int t = 1;
    long long n;
    while (t--)
    {
        cin >> n;
        Run(n);
    }
}
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
const long long MOD = 1e9 + 7;
long long MUL_MOD(long long a, long long b, long long MOD)
{
    if (b == 0)
        return 0;
    long long tmp = MUL_MOD(a, b / 2, MOD);
    if (b % 2 == 1)
        return (a % MOD + 2 * (tmp % MOD)) % MOD;
    else
        return (2 * (tmp % MOD)) % MOD;
}
void Run()
{
    long long a, b, c;
    cin >> a >> b >> c;
    cout << MUL_MOD(a, b, c) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
 
    return 0;
}
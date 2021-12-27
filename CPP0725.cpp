//kCn = (n-k)Cn.
//kCn = kC(n-1) + (k-1)C(n−1).
//Chia de tri.
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
const long long MOD = 1e9 + 7;
vector<vector<long long>> nCr(1002, vector<long long>(1002, 0));
void Run()
{
    long long n, r;
    cin >> n >> r;
    cout << nCr[n][r] << endl;
}
int main()
{
    for (int i = 0; i < 1002; i++)
    {
        nCr[i][0] = nCr[i][i] = 1;
        for (int j = 1; j <= i / 2; j++)
        {
            nCr[i][j] = nCr[i][i - j] = (nCr[i - 1][j] + nCr[i - 1][j - 1]) % MOD;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
void Run(long long n)
{
    cout << (n + 1) * n / 2 << endl;
}
int main()
{
    int t;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Run(n);
    }
}
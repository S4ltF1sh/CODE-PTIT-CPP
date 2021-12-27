#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void Run(long long s)
{
    if (isPrime(s))
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    int t=1;
    long long s;
    while (t--)
    {
        cin >> s;
        Run(s);
    }
}
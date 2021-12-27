#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<bool> isPrime(1e6 + 3, true);
vector<int> CongDon(1e6 + 3, 0);
void Sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (isPrime[i])
            for (int j = i * i; j <= 1e6; j += i)
                isPrime[j] = false;
    }
}
void Run()
{
    int l, r;
    cin >> l >> r;
    cout << CongDon[r] - CongDon[l - 1] << endl;
}
int main()
{
    Sieve();
    for (int i = 1; i <= 1e6; i++)
    {
        if (isPrime[i] == true)
            CongDon[i] = CongDon[i - 1] + 1;
        else
            CongDon[i] = CongDon[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}
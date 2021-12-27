#include <iostream>
#include <vector>
using namespace std;
vector<bool> isPrime(1e6 + 1, true);

void Sieve()
{
    isPrime.at(0) = isPrime.at(1) = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (isPrime.at(i) == true)
        {
            for (long long j = i * i; j <= 1e6; j += i)
            {
                isPrime.at(j) = false;
            }
        }
    }
}
void Run()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (isPrime.at(i) == true && isPrime.at(n - i) == true)
        {
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    Sieve();
    while (t--)
    {
        Run();
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
vector<bool> isPrime(1e6 + 1, true);
void Sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (isPrime[i] == true)
        {
            for (long long j = i * i; j <= 1e6; j += i)
            {
                if (isPrime[j] == true)
                    isPrime[j] = false;
            }
        }
    }
}
void Run()
{
    long long n;
    cin >> n;
    int Count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i] == true)
            Count++;
    }
    cout << Count << endl;
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
} 
//ƯỚC SỐ NGUYÊN TỐ NHỎ HƠN N
#include <iostream>
#include <vector>
using namespace std;
vector<bool> isPrime(10005, true);
void Sieve()
{
    isPrime.at(0) = isPrime.at(1) = false;
    for (int i = 2; i * i <= 10000; i++)
    {
        if (isPrime.at(i) == true)
        {
            for (int j = 2 * i; j <= 10000; j += i)
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
    for (int i = 2; i <= n; i++)
        if (isPrime.at(i) == true)
            cout << i << " ";
    cout << endl;
}
int main()
{
    Sieve();
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}
//LIỆT KÊ SỐ NGUYÊN TỐ - 1
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
int main()
{
    Sieve();
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    for (int i = a; i <= b; i++)
    {
        if (isPrime.at(i) == true)
            cout << i << " ";
    }
}
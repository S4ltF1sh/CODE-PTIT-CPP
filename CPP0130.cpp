//ƯỚC SỐ NGUYÊN TỐ
#include <iostream>
using namespace std;
void Run()
{
    long long n;
    cin >> n;
    if (n < 2)
        return;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        }
    }
    if (n > 1)
        cout << n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
        cout << "\n";
    }
}
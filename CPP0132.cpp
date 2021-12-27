// ƯỚC SỐ NGUYÊN TỐ LỚN NHẤT
#include <iostream>
using namespace std;
void Run()
{
    long long n, Res = 0;
    cin >> n;
    if (n < 2)
        return;
    if (n % 2 == 0)
    {
        Res = 2;
        while (n % 2 == 0)
        {
            n /= 2;
        }
    }
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            Res = i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
        Res = n;
    cout << Res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}
//PHÂN TÍCH THỪA SỐ NGUYÊN TỐ - 1
#include <iostream>
using namespace std;
void Run()
{
    int Cnt = 0;
    long long n;
    cin >> n;
    if (n < 2)
        return;
    if (n % 2 == 0)
    {
        while (n % 2 == 0)
        {
            Cnt++;
            n /= 2;
        }
        cout << 2 << " " << Cnt << " ";
    }

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            Cnt = 0;
            while (n % i == 0)
            {
                Cnt++;
                n /= i;
            }
            cout << i << " " << Cnt << " ";
        }
    }
    if (n > 1)
        cout << n << " " << 1;
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
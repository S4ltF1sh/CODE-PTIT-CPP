//ƯỚC SỐ CHUNG LỚN NHẤT CỦA N SỐ NGUYÊN DƯƠNG ĐẦU TIÊN
#include <iostream>
using namespace std;
long long UCLN(long long a, long long b)
{
    if (a == 0 || b == 0)
        return a + b;
    return UCLN(b, a % b);
}
long long BCNN(long long a, long long b)
{
    if (b == 1)
        return a;
    a = a * b / UCLN(a, b);
    b--;
    return BCNN(a, b);
}
void Run()
{
    long long n;
    cin >> n;
    if (n < 3)
        cout << n << "\n";
    else
    {
        cout << BCNN(n, n - 1) << endl;
    }
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
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
    return (a * b / UCLN(a, b));
}
int main()
{
    long long a, x, y;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> y;
        long long n = UCLN(x, y);
        for (long long i = 0; i < n; i++)
            cout << a;
        cout << endl;
    }
}
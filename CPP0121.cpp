//ƯỚC SỐ CHUNG - BỘI SỐ CHUNG
#include <iostream>
#include <algorithm>
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
    long long a, b;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << BCNN(a, b) << " " << UCLN(a, b) << endl;
    }
}
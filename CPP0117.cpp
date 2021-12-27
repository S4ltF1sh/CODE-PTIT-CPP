#include <iostream>
using namespace std;
int Winrar(long long n)
{
    int Sum = 0;
    while (n > 0)
    {
        Sum += n % 10;
        n /= 10;
    }
    if (Sum < 10)
        return Sum;
    return Winrar(Sum);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << Winrar(n) << endl;
    }
    return 0;
}
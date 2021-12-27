//DIỆN TÍCH ĐA GIÁC
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define ll long long
void xuly()
{
    ll n;
    cin >> n;
    double x[n + 5], y[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    double Res = 0.0;
    ll j = n;
    for (int i = 1; i <= n; i++)
    {
        Res += (x[j] + x[i]) * (y[j] - y[i]);
        j = i;
    }
    Res = fabs(Res);
    Res /= 2.0;
    cout << setprecision(3) << fixed << Res << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        xuly();
    return 0;
}
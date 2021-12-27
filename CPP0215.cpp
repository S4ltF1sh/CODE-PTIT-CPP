//TỔNG LỚN NHẤT
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long a[n + 1], b[m + 1], Res, tmp;
        a[0] = b[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> tmp;
            a[i] = a[i - 1] + tmp;
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> tmp;
            b[i] = b[i - 1] + tmp;
        }
        Res = max(a[n], b[m]);
        for (int i = 1; i <= min(m, n); i++)
            Res = max(Res, max(a[i] + b[m] - b[i], b[i] + a[n] - a[i]));
        cout << Res << endl;
    }
}
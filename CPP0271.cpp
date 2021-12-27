//LÀM MỊN ẢNH
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
#define ll long long
ll a[600][600], b[600][600] = {0};
void Run()
{
    ll n, m, l;
    scanf("%lld%lld%lld", &n, &m, &l);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%lld", &a[i][j]);
    ll tmp = l * l;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
        }
    }
    for (int i = l; i <= n; i++)
    {
        for (int j = l; j <= m; j++)
        {
            printf("%lld ", (b[i][j] - b[i - l][j] - b[i][j - l] + b[i - l][j - l]) / tmp);
        }
        printf("\n");
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
        Run();
    return 0;
}
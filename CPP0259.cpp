#include <vector>
#include <iostream>
using namespace std;

int main()
{
    long long i, j, k, sum, n, m, p;
    cin >> n >> m >> p;
    long long a[n + 2][m + 2], b[m + 2][p + 2], c[n + 2][p + 2];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%lld", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            sum = 0;
            for (k = 0; k < m; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
}
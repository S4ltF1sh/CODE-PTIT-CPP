//GIAO CUA 3 DAY SO:
#include <stdio.h>
long long Res[100005] = {};
void Init(long long Arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%lld", &Arr[i]);
}
void Find(long long a[], long long b[], long long c[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0, l = -1;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && a[i] == c[k])
        {
            Res[++l] = a[i];
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < c[k])
            j++;
        else
            k++;
    }
    if (l == -1)
        printf("-1");
    else
        for (int i = 0; i <= l; i++)
            printf("%lld ", Res[i]);
}
 
void Run()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    long long a[n1 + 5], b[n2 + 5], c[n3 + 5];
    Init(a, n1);
    Init(b, n2);
    Init(c, n3);
    Find(a, b, c, n1, n2, n3);
    printf("\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        Run();
}
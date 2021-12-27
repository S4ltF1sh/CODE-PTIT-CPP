#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int Check1(int n)
{
    if (n < 10)
        return 0;
    int tmp = n % 10;
    n /= 10;
    while (n > 0)
    {
        int tmp1 = n % 10;
        if (tmp1 <= tmp)
            return 0;
        tmp = tmp1;
        n /= 10;
    }
    return 1;
}
int Check2(int n)
{
    if (n < 10)
        return 0;
    int tmp = n % 10;
    n /= 10;
    while (n > 0)
    {
        int tmp1 = n % 10;
        if (tmp1 >= tmp)
            return 0;
        tmp = tmp1;
        n /= 10;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, Cnt = 0;
        scanf("%d", &n);
        int a = pow(10, n - 1), b = pow(10, n);
        for (int i = a; i < b; i++)
        {
            if ((Check1(i) == 1 || Check2(i) == 1) && isPrime(i) == 1)
                Cnt++;
        }
        printf("%d\n", Cnt);
    }
    return 0;
}
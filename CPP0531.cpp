#include <stdio.h>
#define ll long long
void Run()
{
    ll x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
    scanf("%lld%lld%lld", &x1, &y1, &z1);
    scanf("%lld%lld%lld", &x2, &y2, &z2);
    scanf("%lld%lld%lld", &x3, &y3, &z3);
    scanf("%lld%lld%lld", &x4, &y4, &z4);
    ll ab1 = x2 - x1, ab2 = y2 - y1, ab3 = z2 - z1;
    ll ac1 = x3 - x1, ac2 = y3 - y1, ac3 = z3 - z1;
    ll ad1 = x4 - x1, ad2 = y4 - y1, ad3 = z4 - z1;
    ll ans1 = ab2 * ac3 - ab3 * ac2, ans2 = ac1 * ab3 - ac3 * ab1, ans3 = ab1 * ac2 - ac1 * ab2;
    ll Res = ans1 * ad1 + ans2 * ad2 + ans3 * ad3;
    if (Res == 0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        Run();
    return 0;
}
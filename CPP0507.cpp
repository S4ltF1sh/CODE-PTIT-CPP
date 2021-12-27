#include <iostream>
#include <cstdio>
using namespace std;
long long UCLN(long long a, long long b)
{
    if (a == 0 || b == 0)
        return a + b;
    return UCLN(b, a % b);
}
struct PhanSo
{
    long long TuSo;
    long long MauSo;
};
void nhap(PhanSo &p)
{
    cin >> p.TuSo >> p.MauSo;
}
void rutgon(PhanSo &p)
{
    long long tmp = UCLN(p.TuSo, p.MauSo);
    p.TuSo /= tmp;
    p.MauSo /= tmp;
}
PhanSo tong(PhanSo p, PhanSo q)
{
    PhanSo t = {p.TuSo * q.MauSo + q.TuSo * p.MauSo, p.MauSo * q.MauSo};
    rutgon(t);
    return t;
}
void in(PhanSo p)
{
    cout << p.TuSo << "/" << p.MauSo;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}
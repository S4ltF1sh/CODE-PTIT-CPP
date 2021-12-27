//PHÉP TOÁN VỚI PHÂN SỐ:
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
    long long tu;
    long long mau;
};
void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p)
{
    long long tmp = UCLN(p.tu, p.mau);
    p.tu /= tmp;
    p.mau /= tmp;
}
PhanSo tong(PhanSo p, PhanSo q)
{
    PhanSo t = {p.tu * q.mau + q.tu * p.mau, p.mau * q.mau};
    rutgon(t);
    return t;
}
PhanSo tich3(PhanSo p, PhanSo q, PhanSo k)
{
    PhanSo ti = {p.tu * q.tu * k.tu, p.mau * q.mau * k.mau};
    rutgon(ti);
    return ti;
}
PhanSo tich2(PhanSo p, PhanSo q)
{
    PhanSo ti = {p.tu * q.tu, p.mau * q.mau};
    rutgon(ti);
    return ti;
}
void in(PhanSo p)
{
    cout << p.tu << "/" << p.mau;
}
void process(PhanSo &p, PhanSo &q)
{
    PhanSo t = tong(p, q);
    t = tich2(t, t);
    PhanSo ti = tich3(p, q, t);
    in(t);
    cout << " ";
    in(ti);
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}
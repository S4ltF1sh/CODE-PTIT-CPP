#include <iostream>
#include <iomanip>
using namespace std;
struct ThiSinh
{
    string Name;
    string Birthday;
    double a, b, c;
};
void nhap(ThiSinh &p)
{
    getline(std::cin, p.Name);
    cin >> p.Birthday >> p.a >> p.b >> p.c;
}

void in(ThiSinh p)
{
    cout << p.Name << " " << p.Birthday << " " << setprecision(1) << fixed << p.a + p.b + p.c;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
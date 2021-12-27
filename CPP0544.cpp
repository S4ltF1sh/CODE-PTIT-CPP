//DIỆN TÍCH HÌNH TRÒN NGOẠI TIẾP TAM GIÁC
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.141592653589793238
double a1, a2, b1, b2, c1, c2;
void Run()
{
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    double d1 = sqrt(pow(a1 - b1, 2) + pow(a2 - b2, 2));
    double d2 = sqrt(pow(a1 - c1, 2) + pow(a2 - c2, 2));
    double d3 = sqrt(pow(b1 - c1, 2) + pow(b2 - c2, 2));
    if (d1 >= d2 + d3 || d2 >= d1 + d3 || d3 >= d1 + d2)
    {
        cout << "INVALID\n";
        return;
    }
    double p = (d1 + d2 + d3) / 2.0;
    double s = sqrt(p * (p - d1) * (p - d2) * (p - d3));
    double r = (d1 * d2 * d3) / (4 * s);
    double Res = PI * r * r;
    cout << setprecision(3) << fixed << Res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Run()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double Res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << setprecision(4) << fixed << Res << endl;
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
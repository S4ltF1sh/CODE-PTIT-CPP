//TRẺ NHẤT – GIÀ NHẤT
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int r = 0;
struct DATA
{
    string Name;
    string Birthday;
    string Year;
    string Month;
    string Day;
};
bool cmp(DATA a, DATA b)
{
    if (a.Year == b.Year)
    {
        if (a.Month == b.Month)
            return a.Day < b.Day;
        else
            return a.Month < b.Month;
    }
    return a.Year < b.Year;
}
void nhap(DATA &p)
{
    cin >> p.Name >> p.Birthday;

    if (p.Birthday[1] == '/')
        p.Birthday = "0" + p.Birthday;
    if (p.Birthday[4] == '/')
        p.Birthday.insert(p.Birthday.begin() + 3, '0');

    p.Day += p.Birthday[0];
    p.Day += p.Birthday[1];
    p.Month += p.Birthday[3];
    p.Month += p.Birthday[4];
    p.Year += p.Birthday[6];
    p.Year += p.Birthday[7];
    p.Year += p.Birthday[8];
    p.Year += p.Birthday[9];
}
int main()
{
    int n;
    cin >> n;
    vector<DATA> Res(n);
    for (int i = 0; i < n; i++)
        nhap(Res[i]);
    sort(Res.begin(), Res.end(), cmp);
    cout << Res[n - 1].Name << "\n"
         << Res[0].Name;
}
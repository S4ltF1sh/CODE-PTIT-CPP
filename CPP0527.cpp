//SẮP XẾP THỜI GIAN
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
using namespace std;
struct DATA
{
    int Hour;
    int Minute;
    int Second;
};
bool cmp(DATA a, DATA b)
{
    if (a.Hour == b.Hour)
    {
        if (a.Minute == b.Minute)
            return a.Second < b.Second;
        else
            return a.Minute < b.Minute;
    }
    return a.Hour < b.Hour;
}
void Run()
{
    int n;
    cin >> n;
    vector<DATA> Res(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Res[i].Hour >> Res[i].Minute >> Res[i].Second;
    }
    sort(Res.begin(), Res.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << Res[i].Hour << " " << Res[i].Minute << " " << Res[i].Second << "\n";
    }
}
int main()
{
    Run();
}
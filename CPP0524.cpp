//BẢNG ĐIỂM THÀNH PHẦN - 1
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
using namespace std;
struct DATA
{
    string MSV;
    string Name;
    string Class;
    double p1, p2, p3;
};
bool cmp(DATA a, DATA b)
{
    return a.MSV < b.MSV;
}
void Run()
{
    char tmp;
    int n;
    cin >> n;
    vector<DATA> Res(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Res[i].MSV;
        scanf("\n");
        getline(cin, Res[i].Name);
        cin >> Res[i].Class;
        cin >> Res[i].p1 >> Res[i].p2 >> Res[i].p3;
    }
    sort(Res.begin(), Res.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << Res[i].MSV << " " << Res[i].Name
             << " " << Res[i].Class << " " << setprecision(1) << fixed << Res[i].p1 << " " << Res[i].p2 << " " << Res[i].p3 << endl;
    }
}
int main()
{
    Run();
}
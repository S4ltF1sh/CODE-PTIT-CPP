//SẮP XẾP DANH SÁCH MẶT HÀNG
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
using namespace std;
struct DATA
{
    int Stt;
    string Name;
    string Type;
    double Lai;
};
bool cmp(DATA a, DATA b)
{
    return a.Lai > b.Lai;
}
void Run()
{
    double Buy, Sale;
    int n;
    cin >> n;
    vector<DATA> Res(n);
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        Res[i].Stt = i + 1;
        getline(cin, Res[i].Name);
        getline(cin, Res[i].Type);
        cin >> Buy >> Sale;
        Res[i].Lai = Sale - Buy;
    }
    sort(Res.begin(), Res.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << Res[i].Stt << " " << Res[i].Name << " " << Res[i].Type << " " << setprecision(2) << fixed << Res[i].Lai << endl;
    }
}
int main()
{
    Run();
}
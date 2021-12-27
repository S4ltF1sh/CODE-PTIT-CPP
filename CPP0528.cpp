//DANH SÁCH THỰC TẬP - 1
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
    string MSV;
    string Name;
    string Class;
    string Mail;
    string Name2;
};
bool cmp(DATA a, DATA b)
{
    return a.Name < b.Name;
}
void Run()
{
    string Check;
    int n, q;
    cin >> n;
    vector<DATA> Res(n);
    for (int i = 0; i < n; i++)
    {
        Res[i].Stt = i + 1;
        cin >> Res[i].MSV;
        scanf("\n");
        getline(cin, Res[i].Name);
        cin >> Res[i].Class;
        cin >> Res[i].Mail;
        cin >> Res[i].Name2;
    }
    sort(Res.begin(), Res.end(), cmp);
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> Check;
        for (int i = 0; i < n; i++)
        {
            if (Res[i].Name2 == Check)
                cout << Res[i].Stt << " " << Res[i].MSV << " " << Res[i].Name << " "
                     << Res[i].Class << " " << Res[i].Mail << " " << Check << "\n";
        }
    }
}
int main()
{
    Run();
}
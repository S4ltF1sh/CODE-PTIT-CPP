//SẮP XẾP DANH SÁCH NHÂN VIÊN
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;
int r = 0;
struct NhanVien
{
    string STT;
    string Name;
    string Gender;
    string Birthday;
    string Year;
    string Month;
    string Day;
    string Address;
    string Id;
    string Date;
};
bool cmp(NhanVien a, NhanVien b)
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
void nhap(NhanVien &p)
{
    cin.ignore();
    getline(std::cin, p.Name);
    cin >> p.Gender >> p.Birthday;
    cin.ignore();
    getline(std::cin, p.Address);
    cin >> p.Id >> p.Date;
    
    if (p.Birthday[1] == '/')
        p.Birthday = "0" + p.Birthday;
    if (p.Birthday[4] == '/')
        p.Birthday.insert(p.Birthday.begin() + 3, '0');

    p.Month += p.Birthday[0];
    p.Month += p.Birthday[1];
    p.Day += p.Birthday[3];
    p.Day += p.Birthday[4];
    p.Year += p.Birthday[6];
    p.Year += p.Birthday[7];
    p.Year += p.Birthday[8];
    p.Year += p.Birthday[9];

    if (p.Date[1] == '/')
        p.Date = "0" + p.Date;
    if (p.Date[4] == '/')
        p.Date.insert(p.Date.begin() + 3, '0');
    r++;
    if (r > 9)
        p.STT = "000" + to_string(r);
    else
        p.STT = "0000" + to_string(r);
}
void sapxep(NhanVien p[], int n)
{
    sort(p, p + n, cmp);
}
void inds(NhanVien p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i].STT << " " << p[i].Name << " " << p[i].Gender << " " << p[i].Birthday << " "
             << p[i].Address << " " << p[i].Id << " " << p[i].Date << endl;
        // cout << p[i].Day << "\n"
        //      << p[i].Month << "\n"
        //      << p[i].Year << "\n";
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
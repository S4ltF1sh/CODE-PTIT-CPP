//DANH SACH NHAN VIEN
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int r = 0;
struct NhanVien
{
    string STT;
    string Name;
    string Gender;
    string Birthday;
    string Address;
    string Id;
    string Date;
};
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

void inds(NhanVien p[], int n)
{
    for (int i = 0; i < n; i++)
        cout << p[i].STT << " " << p[i].Name << " " << p[i].Gender << " " << p[i].Birthday << " " << p[i].Address << " " << p[i].Id << " " << p[i].Date << endl;
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}
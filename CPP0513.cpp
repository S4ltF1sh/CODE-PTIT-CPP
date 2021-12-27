//DANH SÁCH SINH VIÊN - 1
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
struct SinhVien
{
    string MSV;
    string Name;
    string Class;
    string Birthday;
    double GPA;
};
void nhap(SinhVien p[], int n)
{
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(std::cin, p[i].Name);
        cin >> p[i].Class >> p[i].Birthday >> p[i].GPA;
        if (p[i].Birthday[1] == '/')
            p[i].Birthday = "0" + p[i].Birthday;
        if (p[i].Birthday[4] == '/')
            p[i].Birthday.insert(p[i].Birthday.begin() + 3, '0');
        r++;
        if (r > 9)
            p[i].MSV = "B20DCCN0" + to_string(r);
        else
            p[i].MSV = "B20DCCN00" + to_string(r);
    }
}

void in(SinhVien p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i].MSV << " " << p[i].Name << " " << p[i].Class << " " << p[i].Birthday << " " << setprecision(2) << fixed << p[i].GPA;
        cout << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
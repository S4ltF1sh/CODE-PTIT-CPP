//DANH SÁCH SINH VIÊN - 3
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <sstream>
#include <algorithm>
using namespace std;
struct SinhVien
{
    string MSV;
    string Name;
    string Class;
    string Birthday;
    double GPA;
};
bool cmp(SinhVien a, SinhVien b)
{
    return a.GPA > b.GPA;
}
string ReMake(string str)
{
    stringstream ss(str);
    string token, Res = "";
    while (ss >> token)
    {
        for (int i = 0; i < token.length(); i++)
            token[i] = tolower(token[i]);
        token[0] = toupper(token[0]);
        Res = Res + token + " ";
    }
    //xoa dau " " thua:
    Res.pop_back();
    return Res;
}
void nhap(SinhVien p[], int n)
{
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(std::cin, p[i].Name);
        p[i].Name = ReMake(p[i].Name);
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
void sapxep(SinhVien p[], int n)
{
    sort(p, p + n, cmp);
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
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
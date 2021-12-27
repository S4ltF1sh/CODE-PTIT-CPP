#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
struct SinhVien
{
    string Name;
    string Class;
    string Birthday;
    double GPA;
};
void nhap(SinhVien &p)
{
    getline(std::cin, p.Name);
    cin >> p.Class >> p.Birthday >> p.GPA;
    if (p.Birthday[1] == '/')
        p.Birthday = "0" + p.Birthday;
    if (p.Birthday[4] == '/')
        p.Birthday.insert(p.Birthday.begin() + 3, '0');
}

void in(SinhVien p)
{
    cout << "B20DCCN001 " << p.Name << " " << p.Class << " " << p.Birthday << " " << setprecision(2) << fixed << p.GPA;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
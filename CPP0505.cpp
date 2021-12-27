#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
struct NhanVien
{
    string Name;
    string Gender;
    string Birthday;
    string Address;
    string Id;
    string Date;
};
void nhap(NhanVien &p)
{
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
}

void in(NhanVien p)
{
    cout << "00001 " << p.Name << " " << p.Gender << " " << p.Birthday << " " << p.Address << " " << p.Id << " " << p.Date;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
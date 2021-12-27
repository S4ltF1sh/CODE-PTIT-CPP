// KHAI BÁO LỚP NHÂN VIÊN
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define endl "\n"

class SinhVien
{
private:
    string name;
    string className;
    string birthday;
    double point;

public:
    friend istream &operator>>(istream &is, SinhVien &a)
    {
        getline(is, a.name);
        getline(is, a.className);
        getline(is, a.birthday);
        is >> a.point;
        if (a.birthday[1] == '/')
            a.birthday = "0" + a.birthday;
        if (a.birthday[4] == '/')
            a.birthday.insert(a.birthday.begin() + 3, '0');
        return is;
    }

    friend ostream &operator<<(ostream &os, SinhVien &a)
    {
        return os << "B20DCCN001 "
                  << a.name << " "
                  << a.className << " "
                  << a.birthday << " "
                  << fixed << setprecision(2) << a.point;
    }
};

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

class <>: <> <>
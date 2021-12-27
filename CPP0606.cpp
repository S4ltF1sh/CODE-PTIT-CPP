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

class NhanVien
{
private:
    string name;
    string gen;
    string birthday;
    string address;
    string id;
    string date;

public:
    void nhap()
    {
        getline(cin, this->name);
        getline(cin, this->gen);
        getline(cin, this->birthday);
        getline(cin, this->address);
        getline(cin, this->id);
        getline(cin, this->date);
    }

    void xuat()
    {
        cout << "00001 " << this->name << " " << this->gen << " " << this->birthday << " " << this->address << " " << this->id << " " << this->date;
    }
};

int main()
{
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
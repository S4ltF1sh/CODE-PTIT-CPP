//x khong duoc chua 0,1
//2!=2!
//3!=3!
//4!=3!*2!*2!
//5!=5!
//6!=5!*3!
//7!=7!
//8!=7!*2!*2!*2!
//9!=7!*3!*3!*2!
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(char x, char y) { return x > y; }
void Run(int n, string a)
{
    string Res = "";
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '2')
            Res.push_back('2');
        else if (a.at(i) == '3')
            Res.push_back('3');
        else if (a.at(i) == '4')
            Res += "322";
        else if (a.at(i) == '5')
            Res.push_back('5');
        else if (a.at(i) == '6')
            Res += "53";
        else if (a.at(i) == '7')
            Res.push_back('7');
        else if (a.at(i) == '8')
            Res += "7222";
        else if (a.at(i) == '9')
            Res += "7332";
    }
    sort(Res.begin(), Res.end(), cmp);
    cout << Res << endl;
}
int main()
{
    int t, n;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> n >> a;
        Run(n, a);
    }
}
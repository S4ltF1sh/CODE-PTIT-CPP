#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
string MulBigNum(string a, string b)
{
    int len1 = a.size();
    int len2 = b.size();
    if (len1 == 0 || len2 == 0)
        return "0";
    vector<int> Res(len1 + len2, 0);
    int i_a = 0;
    int i_b = 0;
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = a.at(i) - '0';
        i_b = 0;
        for (int j = len2 - 1; j >= 0; j--)
        {
            int n2 = b.at(j) - '0';
            int sum = n1 * n2 + Res.at(i_a + i_b) + carry;
            carry = sum / 10;
            Res.at(i_a + i_b) = sum % 10;
            i_b++;
        }
        if (carry > 0)
            Res.at(i_a + i_b) += carry;
        i_a++;
    }
    int i = Res.size() - 1;
    while (i >= 0 && Res.at(i) == 0)
        i--;
    if (i == -1)
        return "0";
    string s = "";
    while (i >= 0)
        s += to_string(Res.at(i--));
    return s;
}
int main()
{
    string a, b;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << MulBigNum(a, b) << "\n";
    }
}
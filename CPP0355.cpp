//XỬ LÝ VĂN BẢN
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
void Run()
{
    vector<string> Res;
    string s = "";
    string tmp;
    int i = 0;
    while (cin >> tmp)
    {
        for (int i = 0; i < tmp.length(); i++)
            tmp[i] = tolower(tmp[i]);
        s += (tmp + " ");
        char tmp1 = tmp[tmp.length() - 1];
        if (tmp1 == '.' || tmp1 == '?' || tmp1 == '!')
        {
            s.pop_back();
            s.pop_back();
            s[0] = toupper(s[0]);
            Res.push_back(s);
            s = "";
        }
    }
    for (int i = 0; i < Res.size(); i++)
    {
        cout << Res[i] << "\n";
    }
}
int main()
{
    Run();
    return 0;
}
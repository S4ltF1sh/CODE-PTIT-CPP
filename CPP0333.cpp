//CHUẨN HÓA HỌ TÊN
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
    vector<string> Res;
    string str;
    getline(std::cin, str);
    stringstream ss(str);
    string token;
    while (ss >> token)
    {
        for (int i = 0; i < token.length(); i++)
            token.at(i) = tolower(token.at(i));
        Res.push_back(token);
    }
    int len = Res.size();
    for (int i = 0; i < len - 1; i++)
    {
        Res.at(i).at(0) = toupper(Res.at(i).at(0));
        cout << Res.at(i);
        if (i != len - 2)
            cout << " ";
    }
    for (int i = 0; i < Res.at(len - 1).length(); i++)
        Res.at(len - 1).at(i) = toupper(Res.at(len - 1).at(i));
    cout << ", " << Res.at(len - 1);
}
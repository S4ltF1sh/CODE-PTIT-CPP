//CHUẨN HÓA HỌ TÊN

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;
void Pick1(string str)
{
    vector<string> Res;
    stringstream ss(str);
    string token;
    while (ss >> token)
    {
        for (int i = 0; i < token.length(); i++)
            token[i] = tolower(token.at(i));
        token[0] = toupper(token[0]);
        Res.push_back(token);
    }
    int len = Res.size();
    cout << Res[len - 1] << " ";
    for (int i = 0; i < len - 1; i++)
        cout << Res[i] << " ";
    cout << "\n";
}
void Pick2(string str)
{
    vector<string> Res;
    stringstream ss(str);
    string token;
    while (ss >> token)
    {
        for (int i = 0; i < token.length(); i++)
            token[i] = tolower(token.at(i));
        token[0] = toupper(token[0]);
        Res.push_back(token);
    }
    int len = Res.size();
    for (int i = 1; i < len; i++)
        cout << Res[i] << " ";
    cout << Res[0] << " ";
    cout << "\n";
}
void Run()
{
    int Pick;
    string str;
    cin >> Pick;
    cin.ignore();
    getline(std::cin, str);
    if (Pick == 1)
        Pick1(str);
    else
        Pick2(str);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}
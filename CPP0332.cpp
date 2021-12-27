//ĐỊA CHỈ EMAIL - 1
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
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
        Res.push_back(token);
    }
    for (int i = 0; i < Res.at(Res.size() - 1).size(); i++)
    {
        if (Res.at(Res.size() - 1).at(i) >= 'A' && Res.at(Res.size() - 1).at(i) <= 'Z')
            Res.at(Res.size() - 1).at(i) += 32;
    }
    cout << Res.at(Res.size() - 1);
    for (int i = 0; i < Res.size() - 1; i++)
    {
        if (Res.at(i).at(0) >= 'A' && Res.at(i).at(0) <= 'Z')
            Res.at(i).at(0) += 32;
        cout << Res.at(i).at(0);
    }
    cout << "@ptit.edu.vn";
}
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> Check;
    vector<string> Res(n, "");
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(std::cin, str);
        stringstream ss(str);
        string token;
        while (ss >> token)
        {
            Res[i].push_back(tolower(token[0]));
        }
        Res[i].pop_back();
        for (int i = 0; i < token.length(); i++)
            token[i] = tolower(token[i]);
        Res[i] = token + Res[i];
        Check[Res[i]]++;
        if (Check[Res[i]] > 1)
            Res[i] += (Check[Res[i]] + '0');
    }
    for (int i = 0; i < n; i++)
    {
        cout << Res[i] << "@ptit.edu.vn\n";
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
void Run()
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
    for (int i = Res.size() - 1; i >= 0; i--)
        cout << Res.at(i) << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        Run();
    }
}
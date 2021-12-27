#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
void Run()
{
    int Cnt = 0;
    string str;
    cin.ignore();
    getline(std::cin, str);
    stringstream ss(str);
    string token;
    while (ss >> token)
    {
        Cnt++;
    }
    cout << Cnt << endl;
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


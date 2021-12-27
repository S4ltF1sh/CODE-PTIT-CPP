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
#include <fstream>
using namespace std;

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define endl "\n"

#pragma region Run
void Run()
{
    string tmp;
    ifstream input;
    ofstream output2;

    input.open("PTIT.in");
    output2.open("PTIT.out");
    while (!input.eof())
    {
        getline(input, tmp);

        output2 << tmp;
        output2 << "\n";
    }
    input.close();
    output2.close();
}
#pragma endregion

int main()
{
    //faster();
    int t = 1;
    //cin >> t;
    while (t--)
        Run();
}
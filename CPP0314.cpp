#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string tmp;
    vector<string> Data;
    int n, Cnt = 1;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, tmp);
        Data.push_back(tmp);
    }
    sort(Data.begin(), Data.end());
    for (int i = 1; i < n; i++)
        if (Data[i] != Data[i - 1])
            Cnt++;
    cout << Cnt;
}
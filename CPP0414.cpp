#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string tmp;
        string Arr = "";
        vector<bool> Checker(300, false);
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            Arr += tmp;
        }
        for (int i = 0; i < Arr.size(); i++)
            Checker.at(Arr.at(i)) = true;
        for (char i = '0'; i <= '9'; i++)
            if (Checker.at(i) == true)
                cout << i << " ";
        cout << endl;
    }
}
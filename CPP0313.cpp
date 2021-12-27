//LOẠI BỎ TỪ TRONG XÂU
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str;
    string stmp;
    getline(std::cin, str);
    cin >> stmp;
    stringstream ss(str);
    string token;
    while (ss >> token)
    {
        if (token != stmp)
            cout << token << " ";
    }
}
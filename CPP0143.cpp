#include <iostream>
#include <vector>
using namespace std;
vector<long long> Fibo(94);
void Init()
{
    Fibo.at(0) = 0;
    Fibo.at(1) = Fibo.at(2) = 1;
    for (int i = 3; i <= 92; i++)
    {
        Fibo.at(i) = Fibo.at(i - 1) + Fibo.at(i - 2);
    }
}
void Run()
{
    int n;
    cin >> n;
    cout << Fibo.at(n) << endl;
}
int main()
{
    Init();
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
}
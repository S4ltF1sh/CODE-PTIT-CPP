//CHIA DƯ TỪ 1 ĐẾN N
#include <iostream>
using namespace std;
void Run()
{
    long long n, k, Sum = 0;
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
        Sum += i % k;
    cout << Sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
}
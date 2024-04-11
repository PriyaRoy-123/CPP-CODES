#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "sum of " << n << " even no: " << sum << endl;

    return 0;
}
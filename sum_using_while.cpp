#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter a number" << endl;
    cin >> n;
    int sum = 0;
    int i = 1;

    while (i <= n)
    {

        sum = sum + i;
        i = i + 1;
    }
    cout << "value of sum is" << endl
         << sum << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:" << endl;
    cin >> n;
    for (int i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0)
        {
            cout << " Not a prime no for " << i << endl;
        }
        else
        {

            cout << " A prime number for " << i << endl;
        }
    }
}
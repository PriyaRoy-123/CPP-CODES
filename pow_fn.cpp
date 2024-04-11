#include <iostream>
using namespace std;
int main()
{
    // pow(a,b)
    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b" << endl;
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "answer is " <<" "<< ans << endl;
}
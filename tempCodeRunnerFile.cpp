#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the amount you want to calculate" << endl;
    cin >> n;

    switch (1)
    {
    case 1:
        cout << (n / 100) << " "
             << "no of 100 rupees required" << endl;
        // break;
    case 2:
        cout << ((n % 100) / 50) << " "
             << "no. of 50  rupees required" << endl;
        break;
    case 3:
        cout << ((((n % 100) % 50)) / 20) <<" " <<"no. of 20 rupees required" << endl;
        break;
    case 4:
        cout << (((((n % 100) % 50)) % 20) / 10) << " " <<"no of 10 rupees required" << endl;
        break;

    Default:
        cout << "ENTER A VALID AMOUNT" << endl;
    }
}
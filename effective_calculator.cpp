#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;
    cout << "enter first number:" << endl;
    cin >> n1;
    cout << "enter the operator you want to apply between these numbers" << endl;
    cin >> op;
    cout << "enter the second number:" << endl;
    cin >> n2;
    int result;

    if (op == '+')
    {
        result = n1 + n2;
    }
    else if (op == '-')
    {
        result = n1 - n2;
    }
    else if (op == '/')
    {
        result = n1 / n2;
    }
    else if (op == '*')
    {
        result = n1 * n2;
    }
    else
    {
        cout << "Invalid operator" << endl;
    }
    cout << "result=";
    cout << result;
}

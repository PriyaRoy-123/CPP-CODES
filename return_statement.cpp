#include <iostream>
#include <cmath>
using namespace std;
double cube(double num)
{
    return num * num * num;
}

int main()
{
    cout << cube(5.0);
    return 0;
}
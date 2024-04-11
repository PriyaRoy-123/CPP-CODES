#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    bool isMale = true;
    bool isTall = true;
    if (isMale && isTall)
    {
        cout << "you are a tall Male" << endl;
    }
    else if (isMale && !isTall)
    {
        cout << "you are a short male" << endl;
    }
    else if (!isMale && isTall)
    {
        cout << "you are a tall but not a Male" << endl;
    }
    return 0;
}
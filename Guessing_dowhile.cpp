#include <iostream>
using namespace std;
int main()
{
    int secretNum = 9;
    int guess;
    do
    {
        cout << "Enter Guess" << endl;
        while (secretNum != guess);
            

        cout << "again guess" << endl;
        cin >> guess;
    }
    cout << "congratulation You win!" << endl;
    return 0;
}
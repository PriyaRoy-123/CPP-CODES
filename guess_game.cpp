#include <iostream>
using namespace std;
int main()
{
    int secretNum = 7;
    int guess;

    while (secretNum != guess)
    {
        cout << "Guess the number" << endl;
        cin >> guess;
    }
    cout << "Congratulation you win!";
    return 0;
}

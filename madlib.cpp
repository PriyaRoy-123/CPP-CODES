#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string colour, pluralNoun, celebrity;
    cout << "Enter a colour:" << endl;
    getline(cin, colour);
    cout << "Enter a pluralNoun:" << endl;
    getline(cin, pluralNoun);
    cout << "Enter a celebrity:" << endl;
    getline(cin, celebrity);

    cout << "Roses is " << colour << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
}
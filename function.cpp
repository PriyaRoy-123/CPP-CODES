#include <iostream>
#include <cmath>
using namespace std;
void sayhi(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are " << age << endl;
}
int main()
{
    sayhi("Priya", 20);
    sayhi("Piyush", 20);
    sayhi("Anita", 22);

    return 0;
}
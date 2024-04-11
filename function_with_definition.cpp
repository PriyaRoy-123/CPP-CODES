#include <iostream>
#include <cmath>
using namespace std;
void sayHi(string name, int age);
int main()
{
    sayHi("Priya", 20);
    sayHi("Piyush", 20);
    sayHi("Anita", 22);
    return 0;
}
void sayHi(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "you are " << age << " years old " << endl;
}
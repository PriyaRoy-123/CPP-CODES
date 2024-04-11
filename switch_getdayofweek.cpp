#include <iostream>
using namespace std;

string getdayofweek(int dayNum)
{
    string dayName;

    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;

    default:
        dayName = "Invalid day Number";
    }

    return dayName;
}
int main()
{
    cout << getdayofweek(6);
    return 0;
}
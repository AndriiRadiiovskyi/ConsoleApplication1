//#1
#include <iostream>
using namespace std;

int main() {
    int seconds;
    cout << "Enter count of seconds from day start: ";
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int sec = seconds % 60;

    cout << "Time: " << hours << " hr "
        << minutes << " min "
        << sec << " sec" << endl;

    int totalSecondsInDay = 24 * 3600;
    int remaining = totalSecondsInDay - seconds;

    int remHours = remaining / 3600;
    int remMinutes = (remaining % 3600) / 60;
    int remSec = remaining % 60;

    cout << "North : " << remHours << " hr "
        << remMinutes << " min "
        << remSec << " sec" << endl;

    return 0;
}
#2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double d;
    cout << "Enter circle diametr: ";
    cin >> d;

    double r = d / 2.0;
    double area = M_PI * r * r;     
    double perimeter = 2 * M_PI * r; 

    cout << "Площа кола: " << area << endl;
    cout << "Периметр (довжина кола): " << perimeter << endl;

    return 0;
}

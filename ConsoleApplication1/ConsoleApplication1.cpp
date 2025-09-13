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
#3
#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    double sum = a + b;
    double product = a * b;
    double average = sum / 2.0;

    cout << "Сума: " << sum << endl;
    cout << "Добуток: " << product << endl;
    cout << "Середнє арифметичне: " << average << endl;

    return 0;
}
#4
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    double sum = a + b + c;
    double product = a * b * c;
    double average = sum / 3.0;

    cout << "Сума: " << sum << endl;
    cout << "Добуток: " << product << endl;
    cout << "Середнє арифметичне: " << average << endl;

    return 0;
}
#5
#include <iostream>
using namespace std;

int main() {
    double price, discount;
    int quantity;

    cout << "Введіть вартість одного ноутбука: ";
    cin >> price;
    cout << "Введіть кількість: ";
    cin >> quantity;
    cout << "Введіть відсоток знижки: ";
    cin >> discount;

    double total = price * quantity;
    double totalWithDiscount = total - (total * discount / 100.0);

    cout << "Загальна сума замовлення зі знижкою: " << totalWithDiscount << endl;

    return 0;
}
#6
#include <iostream>
using namespace std;

int main() {
    double sales;
    cout << "Введіть загальну суму продажів: ";
    cin >> sales;

    double salary = 100 + (sales * 0.05);

    cout << "Зарплата менеджера: " << salary << "$" << endl;

    return 0;
}
#7
#include <iostream>
using namespace std;

int main() {
    double sizeGB, speed;
    cout << "Введіть розмір файлу (ГБ): ";
    cin >> sizeGB;
    cout << "Введіть швидкість інтернету (біт/с): ";
    cin >> speed;

    double sizeBits = sizeGB * 1024 * 1024 * 1024 * 8;
    long long totalSeconds = static_cast<long long>(sizeBits / speed);

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "Файл завантажиться за: "
        << hours << " год "
        << minutes << " хв "
        << seconds << " сек" << endl;

    return 0;
}

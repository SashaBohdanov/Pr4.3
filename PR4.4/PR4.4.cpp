#include <iostream>
#include <iomanip> // Додайте цей рядок
#include <cmath>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double pi = 3.14159265358979323846; // число пі

    double R; // вхідний параметр
    double y; // результат обчислення виразу
    double x_start, x_end, dx;

    cout << "R = "; cin >> R;
    cout << "x_start = "; cin >> x_start;
    cout << "x_end = "; cin >> x_end;
    cout << "dx = "; cin >> dx;

    x = x_start; // починаємо з x_start

    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    while (x <= x_end) // або використовуйте цикл for для ітерації
    {
        // розгалуження в повній формі
        if (x <= -7 - R)
            y = R;
        else if (-7 - R < x && x <= -7 + R)
            y = -sqrt(R * R - (x + 7) * (x + 7)) + R;
        else if (-7 + R < x && x <= -4)
            y = R;
        else if (-4 < x && x <= 0)
            y = -(x - R) / 4;
        else if (0 < x && x <= pi)
            y = sin(x);
        else
            y = tan(45 * pi / 180) * x - pi;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx; // збільшуємо x на крок dx
    }

    cout << "---------------------------" << endl;
    return 0;
}

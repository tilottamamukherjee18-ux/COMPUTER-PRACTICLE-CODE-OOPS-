```cpp
#include <iostream>
using namespace std;

float area(float r)
{
    return 3.14 * r * r;
}

float area(float l, float b)
{
    return l * b;
}

float area(float a, float b, float h)
{
    return 0.5 * b * h;
}

float circumference(float r)
{
    return 2 * 3.14 * r;
}

float circumference(float l, float b)
{
    return 2 * (l + b);
}

float circumference(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    float r, l, w, a, b, h, c;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Area of circle = " << area(r) << endl;
    cout << "Circumference of circle = "
         << circumference(r) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> l >> w;

    cout << "Area of rectangle = " << area(l, w) << endl;
    cout << "Perimeter of rectangle = "
         << circumference(l, w) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;

    cout << "Area of triangle = " << area(0.0f, b, h) << endl;

    cout << "Enter the three sides of triangle: ";
    cin >> a >> b >> c;

    cout << "Perimeter of triangle = "
         << circumference(a, b, c) << endl;

    return 0;
}
```

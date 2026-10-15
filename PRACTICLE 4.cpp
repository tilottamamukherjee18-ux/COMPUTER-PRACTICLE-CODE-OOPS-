```cpp
#include <iostream>
using namespace std;

class Shape
{
    float radius, length, width;

public:
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
        cout << "Constructor called." << endl;
    }

    void circlePerimeter()
    {
        cout << "Perimeter of circle = "
             << 2 * 3.14 * radius << endl;
    }

    void rectanglePerimeter()
    {
        cout << "Perimeter of rectangle = "
             << 2 * (length + width) << endl;
    }

    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float r, l, w;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length of rectangle: ";
    cin >> l;

    cout << "Enter width of rectangle: ";
    cin >> w;

    Shape s(r, l, w);

    s.circlePerimeter();
    s.rectanglePerimeter();

    return 0;
}
```


#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    void getData(int a)
    {
        x = a;
    }

    friend void swap(A &, B &);
};

class B
{
    int y;

public:
    void getData(int b)
    {
        y = b;
    }

    friend void swap(A &, B &);
};

void swap(A &obj1, B &obj2)
{
    int temp;
    temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}

int main()
{
    A obj1;
    B obj2;

    obj1.getData(10);
    obj2.getData(20);

    cout << "Before swapping:" << endl;
    cout << "First number = " << obj1.x << endl;
    cout << "Second number = " << obj2.y << endl;

    swap(obj1, obj2);

    cout << "\nAfter swapping:" << endl;
    cout << "First number = " << obj1.x << endl;
    cout << "Second number = " << obj2.y << endl;

    return 0;
}


```cpp
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Person
{
    char name[64];
    int age;
    char address[64];
    float basic, hra, da, totalSalary;

public:
    Person(const char n[], int a, const char addr[], float b)
    {
        strcpy(name, n);
        age = a;
        strcpy(address, addr);

        basic = b;
        hra = basic * 0.20;
        da = basic * 0.10;
        totalSalary = basic + hra + da;
    }

    inline int getAge()
    {
        return age;
    }

    void displaySalarySlip()
    {
        cout << "\n----- SALARY SLIP -----\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main()
{
    Person p[3] = {
        Person("Rahul", 22, "Kolkata", 20000),
        Person("Priya", 19, "Howrah", 25000),
        Person("Amit", 25, "Delhi", 30000)
    };

    int youngest = p[0].getAge();
    int eldest = p[0].getAge();

    for (int i = 1; i < 3; i++)
    {
        if (p[i].getAge() < youngest)
            youngest = p[i].getAge();

        if (p[i].getAge() > eldest)
            eldest = p[i].getAge();
    }

    cout << "Youngest age: " << youngest << endl;
    cout << "Eldest age: " << eldest << endl;

    p[0].displaySalarySlip();

    return 0;
}
```

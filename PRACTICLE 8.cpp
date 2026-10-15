```cpp
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    char name[50];

public:
    void getStudent()
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter student name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "\nRoll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

class Exam : public Student
{
protected:
    int marks[6];

public:
    void getMarks()
    {
        cout << "Enter marks in six subjects:\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class Result : public Exam
{
    int total;
    float percentage;

public:
    void calculate()
    {
        total = 0;

        for (int i = 0; i < 6; i++)
        {
            total += marks[i];
        }

        percentage = total / 6.0;
    }

    void displayResult()
    {
        displayStudent();

        cout << "Total Marks: " << total << " / 600" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.calculate();
    r.displayResult();

    return 0;
}
```

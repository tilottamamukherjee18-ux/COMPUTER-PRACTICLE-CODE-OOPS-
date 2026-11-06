#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }
};

class Test : virtual public Student
{
protected:
    int m1, m2;

public:
    void getMarks()
    {
        cout << "Enter marks of two subjects: ";
        cin >> m1 >> m2;
    }
};

class Sports : virtual public Student
{
protected:
    int sm;

public:
    void getSports()
    {
        cout << "Enter sports marks: ";
        cin >> sm;
    }
};

class Result : public Test, public Sports
{
public:
    void display()
    {
        int total = m1 + m2 + sm;

        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.getSports();
    r.display();

    return 0;
}

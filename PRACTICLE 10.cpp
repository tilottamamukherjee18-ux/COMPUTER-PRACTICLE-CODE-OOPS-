#include <iostream>
using namespace std;

class Media
{
protected:
    string title, publication;

public:
    virtual void read()
    {
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter publication: ";
        cin >> publication;
    }

    virtual void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Book : public Media
{
    int pages;

public:
    void read()
    {
        Media::read();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void show()
    {
        Media::show();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Media
{
    float time;

public:
    void read()
    {
        Media::read();
        cout << "Enter playing time: ";
        cin >> time;
    }

    void show()
    {
        Media::show();
        cout << "Playing Time: " << time << " minutes" << endl;
    }
};

int main()
{
    Media *ptr;
    Book b;
    Tape t;

    ptr = &b;
    cout << "Enter Book Details:" << endl;
    ptr->read();
    ptr->show();

    ptr = &t;
    cout << "\nEnter Tape Details:" << endl;
    ptr->read();
    ptr->show();

    return 0;
}

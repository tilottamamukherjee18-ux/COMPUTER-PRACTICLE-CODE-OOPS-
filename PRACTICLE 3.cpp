```cpp
#include <iostream>
using namespace std;

void addition(int a[10][10], int b[10][10], int r, int c)
{
    cout << "Addition:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] + b[i][j] << " ";
        cout << endl;
    }
}

void subtraction(int a[10][10], int b[10][10], int r, int c)
{
    cout << "Subtraction:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] - b[i][j] << " ";
        cout << endl;
    }
}

void multiplication(int a[10][10], int b[10][10], int r, int c, int c2)
{
    cout << "Multiplication:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < c; k++)
                sum += a[i][k] * b[k][j];
            cout << sum << " ";
        }
        cout << endl;
    }
}

void transpose(int a[10][10], int r, int c)
{
    cout << "Transpose of first matrix:\n";
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[10][10], b[10][10];
    int r, c, r2, c2, choice;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r >> c;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    cout << "Enter second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    cout << "\n1. Addition\n2. Subtraction\n";
    cout << "3. Multiplication\n4. Transpose\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            if (r == r2 && c == c2)
                addition(a, b, r, c);
            else
                cout << "Addition not possible.";
            break;

        case 2:
            if (r == r2 && c == c2)
                subtraction(a, b, r, c);
            else
                cout << "Subtraction not possible.";
            break;

        case 3:
            if (c == r2)
                multiplication(a, b, r, c, c2);
            else
                cout << "Multiplication not possible.";
            break;

        case 4:
            transpose(a, r, c);
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
```

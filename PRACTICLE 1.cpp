```cpp
#include <iostream>
using namespace std;

int main()
{
    int num, original, remainder, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        cout << "The number is a palindrome.";
    else
        cout << "The number is not a palindrome.";

    return 0;
}
```
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, reverse = "";

    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        reverse = reverse + str[i];
    }

    if (str == reverse)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";

    return 0;
}
```

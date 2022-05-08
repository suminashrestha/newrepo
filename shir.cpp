#include <iostream>
#include <string.h>
using namespace std;
class Compare
{
    char str1[50];

public:
    Compare()
    {
        strcpy(str1, "");
    }
    Compare(char *a)
    {
        strcpy(str1, a);
    }
    void display()
    {
        cout << "String is " << str1 << endl;
    }
    void operator+(Compare o1)
    {
        if (strcmp(str1, o1.str1) == 0)

            cout << "It's equal!!!" << endl;
        else
            cout << "It's not equal!!!" << endl;
    }
};
int main()
{
    char a[50], b[50];
    cout << "Enter any two strings " << endl;
    cin >> a >> b;
    Compare C1(a), C2(b);
    C1.display();
    C2.display();
    C1 + C2;
    return 0;
}
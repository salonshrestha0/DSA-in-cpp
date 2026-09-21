//Topic operator

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "enter two number" << endl;
    cin >> a >> b;
    cout << "the sum is " << a + b << endl;
    cout << "the sub is " << a - b << endl;
    cout << "the mul is " << a * b << endl;
    cout << "the div is " << a / b << endl;

    int c = 12;
    if (c == 12)
    { //== this used to compare the value is it equal to this or not
        // if this is equal  this print c is equal
        cout << "c is equal to 12" << endl;
    }
    else
    {
        // if this not equal to this print c is not equal
        cout << "c is not equal to 12" << endl;
    }

    int d = 20;
    if (c == 12 && d == 20)
    { // this && operator must be both true to print if statement
        cout << "Both are equal" << endl;
    }
    else
    {
        cout << "both are not equal" << endl;
    }
    int e = 20;
    if (c == 12 || e == 20)
    { // this || operator will print if any one of the condition is true
        cout << "One of them is equal" << endl;
    }
    else
    {
        cout << "none of them is equal" << endl;
    }

    int i = 10;
    --i;
    cout << "the value of i is " << i << endl;
    i++;
    cout << "after incrementing the value of i is " << i << endl;
    i--;
    cout << "after decrementing the value of i is " << i << endl;
    return 0;
}

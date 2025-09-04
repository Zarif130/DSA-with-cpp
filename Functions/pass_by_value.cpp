#include <iostream>
using namespace std;

// Function with call by value
void swapValues(int a, int b); 
void swapValues(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function (after swap): a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;
    cout << "Before function call: x = " << x << ", y = " << y << endl;

    swapValues(x, y);  // pass by value (copies of x and y are sent)

    cout << "After function call: x = " << x << ", y = " << y << endl;

    return 0;
}

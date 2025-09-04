#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive number" << endl;
        return 0;  // end program here
    }

    if (num < 0) {
        cout << "Negative number" << endl;
        return 0;  // end program here
    }

    if (num == 0) {
        cout << "Number is zero" << endl;
        return 0;  // end program here
    }

    return 0;
}

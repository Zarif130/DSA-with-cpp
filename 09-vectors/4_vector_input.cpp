#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> vec(n); // Create vector with size n
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i]; // Direct access using index
    }
    
    // Display the vector
    for (int num : vec) {
        cout << num << " ";
    }
    
    return 0;
}
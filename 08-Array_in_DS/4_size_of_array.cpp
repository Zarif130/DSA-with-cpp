#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int marks[] = {99, 84, 83, 77, 65, 65, 45, 43, 23, 87};
    int size_of_array = sizeof(marks); // int=4bits ,so (element*4) is the size of the array!

    cout << "size of the array = " << size_of_array << endl;

    int element_of_the_array = sizeof(marks) / sizeof(int);

    cout << "element of the array = " << element_of_the_array << endl;

    return 0;
}
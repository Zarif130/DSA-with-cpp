#include <bits/stdc++.h>
using namespace std;
void changeArr(int arr[], int size)
{
    cout << "in function" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // pass by reference = pass by address.
    // array sob somay pass by reference e hoy . pass by value hoy nah!
    // c++ a array name akta pointer er mote kaj kore!
    int arr[] = {1, 2, 3};

    changeArr(arr, 3);
    cout << "in main " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    // pass by reference hoy bole main function a valu change hoye gece!
    return 0;
}
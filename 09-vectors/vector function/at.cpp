#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;//helps to print the individual index element! 
    cout << vec.at(2) << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector is like an array !
    /*vector can resize because,it Allocat dynamically */
    vector<int> vec;
    vector<int> vec1 = {1, 2, 3};
    // cout<<vec[0]<<endl;
    cout << vec1[0] << endl;
    cout << "for vec2 " << endl;
    vector<int> vec2(5, 2);
    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;
    cout << vec2[3] << endl;
    cout << vec2[4] << endl;

    return 0;
}
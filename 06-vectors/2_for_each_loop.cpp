#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vector is like an array !

    cout << "for vec " << endl;
    vector<int> vec(5, 7);// size এবং initial value specify করার একটি way।
    
    // this is called the for each loop !
    for (int i : vec)
    {
        cout << i << endl;
    }


    vector<int>zarif{1,2,3,4,5,};
    for (int i : zarif)
    {
        cout << i << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Teacher{
    //properties/attributes
    public:
    string name;
    string dept;
    string subject;
    double salary;

    //methods /. member functions.!
    void changedept(string newdept){
        dept=newdept;
    }
};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
Teacher t1;
Teacher t2;
t1.name="salma";
t1.subject="c++";
t1.dept="Coumputer science";
t1.salary=2500;
cout<<t1.name<<endl;
    return 0;
}
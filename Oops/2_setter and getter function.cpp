#include <bits/stdc++.h>
using namespace std;
class teacher
{

private:
    double salary;

public:
    int roll;
    string name;

    // setter function
    void setSalry(double s)
    {
        salary = s;
    }

    // getter function
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    teacher t1;
    double s = 84493;
    t1.setSalry(s);
   double newsalary= t1.getSalary();
   cout<<newsalary;

        return 0;
}
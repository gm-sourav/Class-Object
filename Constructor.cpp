#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

   // Student(int r, int c, double g)
    //{
      //  roll = r;
        //cls = c;
        //gpa = g;
   // }
};
int main()
{
    Student rahim;
   cin >> rahim.roll >> rahim.cls >> rahim.gpa;

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa;

    return 0;
}
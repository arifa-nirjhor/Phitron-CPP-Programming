#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    double gpa;
    Student (int roll, int cls, double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

int main()
{
    Student rahim(30,4,3.9);
    
    cout<<rahim.roll<<" "<<rahim.gpa<<" "<<rahim.cls<<endl;
    
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
private:
    string phone;
    string cnic;

public:
    string name;
    string clas;
    int roll;
    string subject;
    float gpa;

    Student()
    {
        cout<<"This is default Constructor";
    }

    Student(string n, string c, string s, int r, float g, string ph, string cn)
    {
        name=n;
        clas=c;
        subject=s;
        roll=r;
        gpa=g;
        phone=ph;
        cnic=cn;
    }

};

int main() {
    Student s1; //creating a student


    
    return 0;
}
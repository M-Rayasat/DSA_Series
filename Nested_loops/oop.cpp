#include <iostream>
using namespace std;

class student
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

    void getinfo()
    {
        cout<<"This is the Info of student "<<endl;
        cout<<"Student Name "<< name<< endl;
        cout<<"Student Class "<< clas <<endl;
        cout<<"Student Roll Number "<< roll<< endl;
        cout<<"Student Subject "<< subject << endl;
        cout<<"Student GPA " << gpa<< endl;

    }

    void seninfo()
    {
        cout<<"Student Phone Number "<< phone <<endl;
        cout<<"Student CNIC "<< cnic << endl;

    }

    void infopass(string phone,string cnic)
    {
        this->phone=phone;
        this->cnic=cnic;

    }

};

int main() {
    student s1; //creating a student

    s1.clas="BSCS";     //data entery
    s1.name="Muhammad Rayasat";
    s1.gpa=4.8;
    s1.roll=2260082;
    s1.subject="Computer science";

    s1.getinfo();

    s1.infopass("03297742837", "33210939399392");

    s1.seninfo();



    return 0;
}
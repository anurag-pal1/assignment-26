#include<iostream>
#include<cstring>
using namespace std;

class Student{
string student_name;
int roll_number;
int standard;
public:
    Student(string s,int a,int b)
    {
        student_name=s;
        roll_number=a;
        standard=b;
    }
    void display()
    {
        cout<<"Student Name: "<<student_name<<endl<<"Roll Number: "<<roll_number<<endl<<"Standard: "<<standard<<endl;
    }
};
int main()
{
    string name;
    int r,s;
    cout<<"Enter student name: "<<endl;
    getline(cin,name);
    cout<<"Enter student roll number: "<<endl;
    cin>>r;
    cout<<"Enter student standard: "<<endl;
    cin>>s;
    Student S(name,r,s);
    S.display();
    return 0;
}

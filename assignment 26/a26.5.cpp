#include<iostream>
using namespace std;
class Date{
int date,month,year;
public:
    Date(int d,int m, int y)
    {
        date=d;
        month=m;
        year=y;
    }
    void display()
    {
        cout<<"Date is: ";
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter a date: "<<endl;
    cin>>a>>b>>c;
    Date d(a,b,c);
    d.display();
    return 0;
}


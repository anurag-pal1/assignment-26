#include<iostream>
using namespace std;

class Bank{
float principal;
float rate_of_interest;
float time;
public:
    Bank(float p,float r,float t)
    {
        principal=p;
        rate_of_interest=r;
        time=t;
    }
    int CalculateSimpleOfInterset()
    {
        int temp;
        temp=principal*rate_of_interest*time;
        return temp/100;
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter principal amount: "<<endl;
    cin>>x;
    cout<<"Enter rate of interest: "<<endl;
    cin>>y;
    cout<<"Enter time: "<<endl;
    cin>>z;
    Bank b(x,y,z);
    int r=b.CalculateSimpleOfInterset();
    cout<<"Simple Interest for given data is: "<<r<<endl;
    return 0;
}

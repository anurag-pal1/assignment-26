#include<iostream>
#include<cstring>
using namespace std;

class Bill{
 string customer_name;
 int house_number;
 int mobile_number;
 int unit_consumed;
 public:
     Bill(string n,int h,int m,int u)
     {
         customer_name=n;
         house_number=h;
         mobile_number=m;
         unit_consumed=u;
     }
     int CalculteBill()
     {
         if(unit_consumed>=0&&unit_consumed<=100)
         {
             return unit_consumed*1.20;
         }
         else if(unit_consumed>=100&&unit_consumed<=200)
         {
             return 120+(unit_consumed-100)*2;
         }
         else if(unit_consumed>=200)
         {
             return 320+(unit_consumed-200)*3;
         }
         else
            return 1;
     }

};
int main()
{
    string name;
    int H,M,U;
    cout<<"Enter customer name: "<<endl;
    getline(cin,name);
    cout<<"Enter customer house number: "<<endl;
    cin>>H;
    cout<<"Enter customer mobile number: "<<endl;
    cin>>M;
    cout<<"Enter unit consumed: "<<endl;
    cin>>U;
    Bill b(name,H,M,U);
    int r=b.CalculteBill();
    cout<<"Customer Name: "<<name<<endl;
    cout<<"Mobile number: "<<M<<endl;
    cout<<"House Number: "<<H<<endl;
    cout<<"Unit Consumed: "<<U<<endl;
    cout<<"BILL: "<<r;
    return 0;
}

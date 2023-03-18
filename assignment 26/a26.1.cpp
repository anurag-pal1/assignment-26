#include<iostream>

using namespace std;
class Complex{
int a,b;
public:
    Complex()
    {

    }
    Complex(int p, int q)
    {
        a=p;
        b=q;
    }
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    void showData()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter value of a and b of first complex number: "<<endl;
    cin>>x1>>y1;
    cout<<"Enter value of a and b of second complex number: "<<endl;
    cin>>x2>>y2;
    Complex d1(x1,y1),d2(x2,y2),d3;
   d3=d1.add(d2);
    d3.showData();

    return 0;
}

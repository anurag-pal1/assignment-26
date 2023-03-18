#include<iostream>
using namespace std;

class Box{
int length,breadth,height;
public:
    Box(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    int Volume()
    {
        return length*breadth*height;
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter length, breadth and height of Box: "<<endl;
    cin>>x>>y>>z;
    Box w(x,y,z);
    int r=w.Volume();
    cout<<"Volume of Box is: "<<r<<endl;
    return 0;
}


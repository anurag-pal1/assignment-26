#include<iostream>
using namespace std;
class Cube{
int a;
public:
    Cube(int x)
    {
        a=x;
    }
    int Volume()
    {
        return a*a*a;
    }
};
int main()
{
    int n;
    cout<<"Enter side of cube: "<<endl;
    cin>>n;
    Cube c(n);
    int z=c.Volume();
    cout<<"Volume of cube is: "<<z<<endl;
    return 0;

}

#include<iostream>
using namespace std;
class StaticCount{
public:
    static int a;
    void fun()
    {
        a++;
    }
};
int StaticCount:: a=0;
int main()
{
    StaticCount s;
    s.fun();
    s.fun();
    s.fun();
    cout<<"After increment: "<<s.a<<endl;
    return 0;
}

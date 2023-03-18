#include<iostream>
using namespace std;

class Counter{
static int cou;
public:
    Counter()
    {
        cou++;
    }
    int getCounter()
    {
        return cou;
    }
};
int Counter :: cou;
int main()
{
    Counter a,b,c;
    cout<<"Counter is: "<<a.getCounter()<<endl;
    return 0;
}

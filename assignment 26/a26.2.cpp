#include<iostream>
#include<cstring>
using namespace std;
class Time{
int hour,minute,second;
public:
    Time()
    {

    }
    Time(int a,int b,int c)
    {
        hour=a;
        minute=b;
        second=c;
    }
    void setTime(int x,int y,int z)
    {
        hour=x;
        minute=y;
        second=z;
    }
    Time add(Time t)
    {
        Time temp;
        int m,s;
        s=second+t.second;
        m=minute+t.minute;
        temp.hour=(hour+t.hour)+(m/60);
        temp.minute=(m%60)+(s/60);
        temp.second=s%60;
        return temp;

    }
    void showTime()
    {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main()
{
    int h1,m1,s1,h2,m2,s2;
    cout<<"Enter hour,minute & second of first time:"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"Enter hour,minute & second of second time:"<<endl;
    cin>>h2>>m2>>s2;
    Time t1(h1,m1,s1),t2(h2,m2,s2),t3;
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    double a,b,c,d;
    cout<<"input degree";
    cin>>a;
    cout<<"input minute";
    cin>>b;
    cout<<"input second";
    cin>>c;
    d=a+(b+c/60)/60;
    cout<<"input:"<<a<<"degree,"<<b<<"minute,"<<c<<"second."<<endl;
    if((a>=0&&a<=89)&&(b>=0&&b<=59)&&(c>=0&&c<=59))
    {
        cout<<"output："<<d<<"degree"<<endl;
    }
    else if((a==90)&&(b==0)&&(c==0))
    {
        cout<<"output："<<d<<"degree"<<endl;
    }
    else
    {
        cout<<"output:the latitude entered is invalid.please re-enter it."<<endl;
    }
    return 0;
}//假设维度的合法输入为：度的范围为0-90,分的范围为0-60,秒的范围为0-60
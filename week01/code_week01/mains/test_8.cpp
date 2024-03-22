#include <iostream>
using namespace std;

int main()
{
    int i;
    for(i=1;i<=300;i++)
    {
        int flag1=0;
        int flag2=0;
        if(((i-i/100)/10==7)||(i%10==7)||(i%7==0))
        {
            flag1=1;
        }
        if(((i-i/100)/10==6)||(i%10==6||(i%6==0))) 
        {
            flag2=1;
        }
        if((flag1==0)&&(flag2==0))
        {
            cout<<i<<endl;
        }
        if((flag1==1)&&(flag2==0))
        {
            cout<<"敲桌子"<<endl;
        }
        if((flag1==0)&&(flag2==1))
        {
            cout<<"掀桌子"<<endl;
        }
        if((flag1==1)&&(flag2==1))
        {
            cout<<"没桌子"<<endl;
        }
    }
    return 0;
}
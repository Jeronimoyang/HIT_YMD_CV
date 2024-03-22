#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int select;
    cout<<"將2000內的偶数分解为歌德巴赫猜想模式（每个数列一种形式）：按1"<<endl;
    cout<<"输入一个不大于100000的偶数并对其进行歌德巴赫猜想形式分解（所有的形式）：按2"<<endl;
    cin>>select;
    int num;
    int flag1=0;
    int flag2=0;
    int i,j,k,l,m;
    if(select==1)
    {
        for(i=4;i<=2000;i=i+2)
        {
            for(j=2;j<=(i/2);j++)
            {
                flag1=0;
                flag2=0;
                for(k=1;k<=j;k++)
                {
                    if(j%k==0)
                    {
                        flag1=flag1+1;
                    }
                }
                if(flag1==2)
                {
                    l=i-j;
                    for(m=1;m<=l;m++)
                    {
                        if(l%m==0)
                        {
                            flag2=flag2+1;
                        }
                    }
                    if(flag2==2)
                    {
                        cout<<i<<"="<<j<<"+"<<l<<endl;
                        break;
                    }
                }
            }
        }
    }
    else if(select==2)
    {
        int num1,num2;
        int flag3=0;
        int flag4=0;
        cout<<"输入一个不大于100000的偶数："<<endl;
        cin>>num;
        for(num1=2;num1<=(num/2);num1++)
        {
            flag3=0;
            flag4=0;
            for(i=2;i<=sqrt(num1);i++)
            {
                if(num1%i==0)
                {
                    flag3=1;
                    break;
                }
            }
            if(flag3==0)
            {
                num2=num-num1;
                for(i=2;i<=sqrt(num2);i++)
                {
                    if(num2%i==0)
                    {
                        flag4=1;
                        break;
                    }
                }
                if(flag4==0)
                {
                    cout<<num<<"="<<num1<<"+"<<num2<<endl;
                }
            }
        }
    }
    return 0;
} 
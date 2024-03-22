#include <iostream>
using namespace std;

int main()
{
    int i;
    int a,b,c;
    int total;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=(i-a*100)/10;
        c=i%10;
        total=(a*a*a)+(b*b*b)+(c*c*c);
        if(total==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
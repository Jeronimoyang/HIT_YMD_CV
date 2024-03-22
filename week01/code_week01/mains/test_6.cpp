#include <iostream>
using namespace std;

int main()
{
    double num;
    long long total=1;
    int i;
    cin>>num;
    if(num<0)
    {
        cout<<"the input value is not a positive integer or zero"<<endl;
    }
    else
    {
        if(num-(long)num)
        {
            cout<<"the input value is not an integer"<<endl;
        }
        else
        {
            cout<<"the input value is an integer"<<endl;
            cout<<"total=";
            if(num==0)
            {
                total=1;
                cout<<total<<endl;
            }
            else
            {
                for(i=1;i<=num;i++)
                {
                    total=total*i;
                }
                cout<<total<<endl;
            }
        }
    }
    return 0;
}
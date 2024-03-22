#include <iostream>
using namespace std;

int main()
{
    char letter,let;
    cin>>letter;
    if(letter>='a'&&letter<='z')
    {
        if(letter=='z')
        {
            cout<<'A'<<endl;
        }
        else
        {
            let=letter-31;
            cout<<let<<endl;
        }
    }
    else if(letter>='A'&&letter<='Z')
    {
        if(letter=='Z')
        {
            cout<<'a'<<endl;
        }
        else
        {
            let=letter+33;
            cout<<let<<endl;
        }
    }
    else
    {
        cout<<"输入的不是英文字母"<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a=2;
    int b=5;
    char c=80;
    float f=3.2;
    short e;
    long l=90;
    int flag;
    cin>>flag;
    if(flag==1)//在a/b的运算中，为两个整数相除，并取商的整数部分，故2/5的商的整数部分为0
    {
        cout<<a/b<<endl;
    }
    if(flag==2)//在a/b的运算中，为两个整数相除，并取商的整数部分，故5/2的商的整数部分为2
    {
        cout<<b/a<<endl;
    }
    if(flag==3)//变量c是字符型，80对应ASCII码表是字母P;而c/2为80/2,商的整数部分为40;c/a为80/2,商的整数部分为40;c/(char)b中(char)b表示将b转换成char型变量，为80/5,商的整数部分为16;最终四个输出为P404016
    {
        std::cout << c << c / 2 << c / a << c / (char)b << std::endl;
    }
    if(flag==4)//a=f表示将变量f的数赋值给变量a，但是变量f为实型变量，变量a为整型变量，在赋值的过程中只有整数部分会被赋值到变量a中，故f为3.2,整数部分3赋到a上，输出结果为3
    {
        a=f;
        cout<<a<<endl;
    }
    if(flag==5)//a*f中变量a为int型，变量f为float型，二者相乘后结果为float型，故2乘3.2为6.4
    {
        cout<<a*f<<endl;
    }
    if(flag==6)//f/b中变量b为int型，变量f为float型，二者相除后结果为float型，故3.2/5为0.64
    {
        f=f/b;
        cout<<f<<endl;
    }
    if(flag==7)//(float)a/b中变量a和变量b为int型，但(float)a表示将a转换成float型，二者相除后结果为float型，故2.0/5为0.4
    {
        f=(float)a/b;
        cout<<f<<endl;
    }
    if(flag==8)//a/(int)f中变量a为int型，变量f为float型，但(int)f表示将f转换成int型取3.2的整数部分，二者相除后结果为int型，故2/3取商的整数部分0
    {
        a=a/(int)f;
        cout<<a<<endl;
    }
    if(flag==9)//sizeof用于判断变量或数据类型的字节大小，sizeof(a)表示判断int型变量a的字节大小，int型所占字节为4
    {
        cout<<sizeof(a)<<endl;
    }
    if(flag==10)//sizeof用于判断变量或数据类型的字节大小，sizeof(long)表示判断long型的字节大小，long型所占字节为8
    {
        cout<<sizeof(long)<<endl;
    }
    if(flag==11)//sizeof用于判断变量或数据类型的字节大小，sizeof(float)表示判断float型的字节大小，float型所占字节为4
    {
        cout<<sizeof(float)<<endl;
    }
    if(flag==12)//sizeof(long)结果为8,l/sizeof(long)表示long型变量l除以8，结果为long型,故为90/8取商的整数部分为11
    {
        l=l/sizeof(long);
        cout<<l<<endl;
    }
    if(flag==13)
    {
        e=a*b*c*c;//a*b*c*c正常为64000,在是变量e为short型，字节为2个字节，取值范围为-32768-32767，64000超出范围，故结果不正确
        cout<<e<<endl;
    }
    if(flag==14)//a*b*c*c正常为64000,在是变量l为long型，字节为8个字节，取值范围为-2147483648-2147483647，64000在范围内，故结果为64000
    {
        l=a*b*c*c;
        cout<<l<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    unsigned u1 = 25, u2 =38;
    std::cout << sizeof(unsigned)<< std::endl;//unsigned型变量所占字节为4,取整数范围为0到4294967295
    std::cout << u2-u1 << std::endl;//变量u1和u2都为无符号整型变量，u2-u1为13,在取值范围内，结果为13
    std::cout << u1-u2 << std::endl;//变量u1和u2都为无符号整型变量，u1-u2为-13,不在取值范围内，结果不为-13
    int a1 = 25, a2 = 38;//取整数范围为-2147483648到2147483647
    std::cout << a2-a1 << std::endl;//变量a1和a2都为有符号整型变量，a2-a1为13,在取值范围内，结果为13
    std::cout << a1-a2 << std::endl;//变量a2和a1都为有符号整型变量，a1-a2为-13,在取值范围内，结果为-13
    std::cout << a1-u1 << std::endl;//变量a1为有符号整型变量，变量u1为无符号整型变量，a1-u1为无符号变量，结果为0,在取值范围，故为0
    std::cout << u1-a1 << std::endl;//变量u1为有符号整型变量，变量a1为无符号整型变量，u1-a1为无符号变量，结果为0,在取值范围，故为0
    return 0;
}
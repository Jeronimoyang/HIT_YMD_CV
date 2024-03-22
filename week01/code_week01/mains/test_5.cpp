#include <iostream>
using namespace std;

int main()
{
    int j=5;
    while(++j<=14)
    {
        std::cout<<j++<<std::endl;
    }
    return 0;
}//++j<=14表示对变量j先进行+1赋值，再进行判断是否小于等于14;std::cout<<j++<<std::endl表示先输出j，在对变量j进行+1赋值;故j最初为5,先+1为6在小于14,输出6后+1为7,在+1为8小于14,以此类推，最终为6 8 10 12 14
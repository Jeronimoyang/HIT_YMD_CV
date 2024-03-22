#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cctype>
#include <string>
using namespace std;
 
int main()
{
    int guess;
    int flag;
    int i;
    double total=0;
    string Guess;
    int number,j;
    int k=0;
    cout <<"RAND_MAX:"<< RAND_MAX << endl;
    srand((unsigned)time(NULL));
    for(i=1;i>0;i++)
    {
        flag=0;
        k=k+1;
        number=(rand() % (k*200+1)-(k*100));
        cout<<"第"<<i<<"轮"<<endl;
        for(j=1;j<=12;j++)
        {
            cin>>Guess;
            if((isdigit(Guess[0]))||((Guess[0]=='-')&&(isdigit(Guess[1]))))
            {
                guess= std::stoi(Guess);
                if((guess>(k*100))||(guess<(k*(-100))))
                {
                    do
                    {
                        cout<<"非法输入，请输入合法数字或按q键退出"<<endl;
                        cin>>Guess;
                        if(Guess[0]=='q')
                        {
                            total=total+j-1;
                            goto END;
                        }
                        guess= std::stoi(Guess);
                    } while ((guess<k*(-100))&&(guess>k*100));
                    
                }
                else if(guess==number)
                {
                    total=total+j;
                    flag=1;
                    cout<<"恭喜本轮通关"<<endl;
                    break;
                }
                else if((guess>number)&&(guess<=(k*100)))
                {
                    cout<<"偏大"<<endl;
                }
                else if((guess<number)&&(guess>=(k*(-100))))
                {
                    cout<<"偏小"<<endl;
                }
            }
            else
            {
                if(Guess[0]=='q')
                {
                    total=total+j-1;
                    goto END;
                }
                else
                {
                    do
                    {
                        cout<<"非法输入，请输入合法数字或按q键退出"<<endl;
                        cin>>Guess;
                        if(Guess[0]=='q')
                        {
                            total=total+j-1;
                            goto END;
                        }
                        guess= std::stoi(Guess);
                    } while ((guess<k*(-100))&&(guess>k*100));
                    if(guess==number)
                    {
                        total=total+j;
                        flag=1;
                        cout<<"恭喜本轮通关"<<endl;
                        break;
                    }
                    else if((guess>number)&&(guess<=(k*100)))
                    {
                        cout<<"偏大"<<endl;
                    }
                    else if((guess<number)&&(guess>=(k*(-100))))
                    {
                        cout<<"偏小"<<endl;
                    }
                }
            }
            if((j==12)&&(flag==0))
            {
                total=total+j;
                goto END;
            }
        }
    }
    END:cout<<"共进行"<<i<<"轮游戏"<<endl;
    cout<<"共猜数字"<<total<<"次"<<endl;
    cout<<"平均每轮猜"<<(total/i)<<"次"<<endl;
    if((total/i)<=6)
    {
        cout<<"Chey-Yo!"<<endl;
    }
    return 0;
}
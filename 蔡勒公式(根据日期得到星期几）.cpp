#include<iostream>
using namespace std;

int weekDay(int day,int month,int year)
{
   int w;   //星期
   int c=year/100;  //世纪
   int y=year%100;     //年
   int m=month;   //月
   if(m<3)
   {
       m+=12;
       y--;
   }
   int d=day;       //日
   w=(y+y/4+c/4-2*c+(26*(m+1)/10)+d-1)%7;   //蔡勒公式
   if(w<0)
   {
       w+=7;
   }
   return w;    //0星期日 1-6 星期一到六
}
int main()
{
    int b;
    b=weekDay(1,3,2016);    //设置日期
    cout<<b;
    return 0;
}

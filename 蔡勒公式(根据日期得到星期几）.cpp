#include<iostream>
using namespace std;

int weekDay(int day,int month,int year)
{
   int w;   //����
   int c=year/100;  //����
   int y=year%100;     //��
   int m=month;   //��
   if(m<3)
   {
       m+=12;
       y--;
   }
   int d=day;       //��
   w=(y+y/4+c/4-2*c+(26*(m+1)/10)+d-1)%7;   //���չ�ʽ
   if(w<0)
   {
       w+=7;
   }
   return w;    //0������ 1-6 ����һ����
}
int main()
{
    int b;
    b=weekDay(1,3,2016);    //��������
    cout<<b;
    return 0;
}

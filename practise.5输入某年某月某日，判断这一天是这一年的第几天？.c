//输入某年某月某日，判断这一天是这一年的第几天？
#include<stdio.h>
int main(){
    int year,month,day,sumday=0,i;
    int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("请输入某年某月某日：格式为年，月，日"); 
    scanf("%d,%d,%d",&year,&month,&day);
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
        monthday[1]=29;
    }
    for(i = 0;i<month-1;i++){
        sumday+=monthday[i];
    }
    printf("这一天是这一年的%d天\n",sumday);
return 0;
}

//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
#include<stdio.h>
int main(){
    int year,month,day,sumday=0,i;
    int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("������ĳ��ĳ��ĳ�գ���ʽΪ�꣬�£���"); 
    scanf("%d,%d,%d",&year,&month,&day);
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
        monthday[1]=29;
    }
    for(i = 0;i<month-1;i++){
        sumday+=monthday[i];
    }
    printf("��һ������һ���%d��\n",sumday);
return 0;
}

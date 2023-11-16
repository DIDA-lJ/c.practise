//题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
//（输出前40个月即可）
//程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。
//使用递归的思想，自己递归自己
#include<stdio.h>
int feibonaqie(i){
    if(i==0){
        return 0;
    }
    if(i==1){
        return 1;
    }
    return feibonaqie(i-1)+feibonaqie(i-2);
}

int main(){
    int i;
    printf("请输入月份：");
    scanf("%d",&i);
    printf("%d\n",feibonaqie(i));
    return 0; 
}

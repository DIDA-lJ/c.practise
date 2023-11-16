// 101 到 200 之间的素数。
#include<stdio.h>
#include<math.h>
int main(){
    int i,number;
    for(i=101;i<=200;i++){
        if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0&&i%11!=0){
            printf("101 到 200 之间的素数为：%d\n",i);
        }
    }
    return 0;
} 

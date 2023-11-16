//有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include<stdio.h>
int main(){
    int i, j, k;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            for(k=1;k<=4;k++){
                if(i!=j&&j!=k&&i!=k){
                    printf("%d%d%d\n",i,j,k);
                }
            }
        }
    }
return 0 ;
} 


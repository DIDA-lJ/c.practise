//从一输出到100 
#include<stdio.h>
void print(int n) {
    if(n==1){
    printf("%d\n",n);
    return ;
    }
    print(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    print(100);
    return 0;
}


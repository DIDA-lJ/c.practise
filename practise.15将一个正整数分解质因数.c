//��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
#include<stdio.h>
int main(){
    int n,i;
    printf("������һ����������");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<=n;i++){
        while(n%i==0){
          printf("%d",i);
          n/=i;
        }if(n%i==1){
            printf("*");
        }              
    } 
return 0;
}

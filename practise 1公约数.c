#include<stdio.h>
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b); 
} 
int main(){
    int a=0,b=0;
    while(a==0&&b==0){
    printf("������a��b��ֵ��");
    scanf("%d%d",&a,&b);
    printf("���������Ĺ�Լ��=%d\n",gcd(a,b)) ;
    }
    return 0;
}

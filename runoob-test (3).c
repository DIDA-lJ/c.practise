//n项求和，denominator为分母，numerator为分子
#include<stdio.h>
int main(){
 int i,n;
 double denominator ,numerator ,t;
 double sum=0.0;
 scanf("%d",&n);
 n=10;
 denominator=2;
 numerator=1;
	for(i=1;i<n;i++){
	sum+=numerator/denominator;
	   t=numerator;
	   numerator=numerator+denominator;
	   denominator=t;	
	}
    printf("%.2f,%.2f",numerator,denominator);
    printf("\n");
	printf("%.2f",sum);
	return 0;
}
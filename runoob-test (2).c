#include<stdio.h>
int main(){
int i,j;
int	n=9;
	for(i=1;i<=n;i++){
	   for(j=1;j<=i;j++){
	      printf("%d*%d=%d     ",j,i,i*j);
	   }
	printf("\n");
	}
    return 0 ;
}
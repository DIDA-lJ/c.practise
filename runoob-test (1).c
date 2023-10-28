#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
int i , j , k;
int count;
	for(i=1;i<=a+3 ; i++){
	    for(j=1;j<=a+3 ; j++){
		    for(k=1 ; k <=a+3 ;k++){
			    if(i!=j && i!=k && k!=j){
				   count++;
					printf("%d%d%d",i,j,k);
					if (count%6==0){
                        printf("\n");
					}else{
					 printf(" ");
					}
				  }
				}
			}
		}
	}
		
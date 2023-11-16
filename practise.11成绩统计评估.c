#include<stdio.h>
int main(){
    int chengji; 
    printf("ÇëÊäÈëÄãµÄ³É¼¨£º");
    scanf("%d",&chengji);
    if(chengji<60){
        printf("F\n");
    }else if(chengji<70&&chengji>60){
        printf("D\n");
    }else if(chengji<80&&chengji>70){
        printf("C\n");
    }else if(chengji<90&&chengji>80){
        printf("B\n");
    }    
    else{
        printf("A");
    } 
return 0;
}

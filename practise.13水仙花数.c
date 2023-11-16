//题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。
//例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
#include<stdio.h>
int main(){
    int i,x,y,z;
    for(i=100;i<1000;i++){
        x=i/100;
        y=i/10%10;
        z=i%10;
       if(i==(x*x*x+y*y*y+z*z*z)){
        printf("%d\n",i);
        }        
    }
return 0;
}



//#include<stdio.h>

//int main(void)
//{
//    int sum, x, y, z;
//    for(x=1;x<10;x++)
//        for(y=0;y<10;y++)
//            for(z=0;z<10;z++)
//            {
//                sum=100*x+10*y+z;
//                if(sum==x*x*x+y*y*y+z*z*z)
//                    printf("%4d",sum);
//            }
//    return 0;
//}

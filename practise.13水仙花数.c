//��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ�������
//���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
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

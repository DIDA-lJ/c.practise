//Ҫ����������������̡�

//�����������������������64���ڰ����ĸ�����ɣ���Ϊ8��*8�С�
//��i�����У�j�������У�����i+j�ĺ͵ı仯����������ڷ��񣬻��ǰ׷���

 #include<stdio.h>
#include<stdlib.h>
int  main()
{
    int  i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if((i+j)%2==0)
            {
                printf("%c%c",0xa8,0x80);
            }
            else
            {
                printf("  ");
            }  
        }
        printf("\n");
    }
    system("pause");
    return  0;
 
}

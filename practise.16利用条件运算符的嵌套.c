//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
//60-89��֮�����B��ʾ��60�����µ���C��ʾ��
//���������(a>b)?a:b��������������Ļ������ӡ�
#include<stdio.h>
int main(){
    int score;
    char grade;
    printf("����������ѧϰ�ɼ���");
    scanf("%d",&score);
    grade=(score>90)?'A':((score>60)?'B':'C');
    printf("%c\n",grade);
    return 0; 
}

//���һ����ά����
#include <stdio.h>
int main() {
   int i, j;
   int arr1[3][4]; 
   // ��������и�ֵ
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 4; j++) {
         arr1[i][j] = i * 4 + j + 1;
      }
   }
   // �������Ԫ��
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 4; j++) {
         printf("%3d", arr1[i][j]);
      }
      printf("\n");
   }
   
   return 0;
}


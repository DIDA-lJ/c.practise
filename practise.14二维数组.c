//输出一个二维数组
#include <stdio.h>
int main() {
   int i, j;
   int arr1[3][4]; 
   // 对数组进行赋值
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 4; j++) {
         arr1[i][j] = i * 4 + j + 1;
      }
   }
   // 输出数组元素
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 4; j++) {
         printf("%3d", arr1[i][j]);
      }
      printf("\n");
   }
   
   return 0;
}


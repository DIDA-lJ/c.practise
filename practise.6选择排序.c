#include <stdio.h>

int main() {
    int i, arr[10], j, min;
    int n = 10;
    
    printf("������10��������");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    printf("���������飺");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //so luong ptu
    int n=0;
    while (n<=0) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    //cap phat
    int *arr = (int*)malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Memory allocation error");
        return 1;
    }
    //nhap tung ptu
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }
//tim kiem
    int max = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    printf("Max = %d\n", max);

    printf("Index = %d\n", index);
    free(arr);


    return 0;
}

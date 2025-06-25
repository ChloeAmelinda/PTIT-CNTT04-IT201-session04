#include <stdio.h>
#include <stdlib.h>

int linesearch(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j >0 ; j--) {
            if (arr[i] == arr[j]) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }
    if (count == 0) {
        printf("No solution");
    }else {
        printf("Cap doi xung");
    }
}

int main(void) {
    int n=0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d", &n);
    }
    int *arr = (int*)malloc(sizeof(int)*n);
    if (arr == NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d]= \n",i+1);
        scanf("%d", &arr[i]);
    }
linesearch(arr, n);

    return 0;
}

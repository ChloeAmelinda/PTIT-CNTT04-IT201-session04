#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n) {
    int i, j;
    int temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1 ; j++) {
            if (arr[j] >arr[j + 1]) {
                temp=arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;

        }

    }
    return -1;
}
int main(void) {
    int n =0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d",&n);
    }
    int *arr = (int*)malloc(sizeof(int)*n);
    if (arr == NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = :",i+1);
        scanf("%d",&arr[i]);
    }
    //sap xep
    bubble_sort(arr,n);
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d \t",arr[i]);

    }
    printf("\n");
    int x;
    printf("Please input a number to find:");
    scanf("%d",&x);
    int result = linear_search(arr, n, x);
    if (result == -1) {
        printf("No such element found\n");

    }else {
        printf("phan tu %d  co trong mang \n",x);
    }
    free(arr);

    return 0;
}

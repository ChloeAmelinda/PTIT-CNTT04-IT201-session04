#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //nhap so luong
    int n=0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d",&n);
    }
    //cap nhap
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }
    //nhap phan tu
    printf("Please input array elements:\n");
    for (int i=0;i<n;i++) {
        printf("Please input %d number:",i+1);
        scanf("%d",&arr[i]);
    }
    //phan tu nho
    int min=arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i]<min) {
            min=arr[i];

        }
    }
    printf("The minimum number is %d",min);
        free(arr);
    return 0;
}

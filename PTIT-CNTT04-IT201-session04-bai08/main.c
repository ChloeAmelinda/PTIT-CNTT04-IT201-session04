#include <stdio.h>
#include <stdlib.h>

void found(int arr[],int n,int x) {
    int count=0;
printf("Vi tri cua phan tu co gia tri trong mang la :\n",x);
    for(int i=0;i<n;i++) {
        if(arr[i]==x) {
            printf("position =%d\n",i+1);
            count++;
        }
    }
    if(count==0) {
        printf("ko ton tai");
    }
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
        printf("arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Please input a number:");
    scanf("%d",&x);
    found(arr,n,x);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int find(int arr[],int n , int x) {
    //int lastindex = -1;
    for(int i = 0 ; i < n ; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}
int main(void) {
    int n=0;
    while(n<=0) {
        printf("Please input a number:");
        scanf("%d",&n);
    }

    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }

    for(int i=0;i<n;i++) {
        printf("arr[%d]=",i+1);
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Please input a number:");
    scanf("%d",&x);

    int result=find(arr,n,x);
    if(result==0) {
        printf("The number %d is not found",x);

    }else {
        printf("The number %d is found",x);
    }
    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//ham tim kiem
int found(int arr[], int n , int x) ;


int main(void){
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    //cap phat
    int *arr = (int*)malloc(n*sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation error");
        return 1;
    }
    //nhap tung phan tu
    for(int i = 0; i < n; i++) {
        printf("Please enter a number arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    //tim kiem
    int x;

    printf("Please enter a number need found : ");
    scanf("%d", &x);

    int result = found(arr, n, x);



    if (result != -1) {
        printf("The number %d is found at position %d", x,result+1);
        //printf("The number %d is not found", x);
    }else {
        printf("The number %d is not found", x);
        //printf("The number %d is found at position %d", x,result+1);
    }
    free(arr);
    return 0;
}

int  found(int arr[], int n , int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}



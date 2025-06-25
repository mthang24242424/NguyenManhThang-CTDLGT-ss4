#include<stdio.h>
#include<stdlib.h>
int binarySearch (int arr[],int left,int right,int num) {
    if (left > right) {
        return 0;
    }
    int mid = (left + right ) / 2;
    if (arr[mid] == num ) {
        return 1;
    } else if (arr[mid] > num) {
        return binarySearch(arr,left,mid-1,num);
    } else {
        return binarySearch (arr,mid+1,right,num);
    }
}
int main() {
    int n;
    printf("nhap vao so luong phan tu: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL || n == 0) {
        printf("ko cap phat duoc bo nho");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
    int temp;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] =temp;
            }
        }
    }
    int number;
    printf("nhap gia tri bat ki: ");
    scanf("%d",&number);
    if (binarySearch(arr,0,n-1,number)) {
        printf("co phan tu trong mang");
    }else {
        printf("ko co phan tu trong mang");
    }
    free(arr);
    return 0;
}

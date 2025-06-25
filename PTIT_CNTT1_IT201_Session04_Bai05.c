#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n,num;
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL || n == 0) {
        printf("ko cap phat duoc bo nho");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("nhap gia tri bat ki de ktra:  ");
    scanf("%d", &num);
    int left = 0, right = n-1;
    int check = 0;
    while (left <= right) {
        int mid = (right + left) / 2;
        if (arr[mid] == num) {
            printf("co phan tu trong mang");
            check = 1;
            break;
        } else if (arr[mid] > num) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    if (!check) {
        printf("ko tim thay phan tu");
    }
    free(arr);
    return 0;
}

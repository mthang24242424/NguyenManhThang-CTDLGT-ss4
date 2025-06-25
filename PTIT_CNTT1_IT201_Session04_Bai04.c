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
    printf("nhap gia tri bat ki de ktra:  ");
    scanf("%d", &num);
    int check = 0;
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] == num) {
            printf("%d ", i);
            check = 1;
            break;
        }
    }
    if (!check) {
        printf("ko tim thay phan tu");
    }
    free(arr);
    return 0;
}

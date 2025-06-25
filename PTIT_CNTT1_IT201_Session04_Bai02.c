#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
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
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            printf("%d ", i);
            break;
        }
    }
    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main () {
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
    int check = 0;
    for (int i = 0; i < n/2; i++) {
        if (arr[i] == arr[n-1-i]) {
            printf("cap doi xung (%d %d)\n",arr[i],arr[i]);
            check = 1;
        }
    }
    if (!check) {
        printf("ko co cap doi xung");
    }
    free(arr);
    return 0;
}

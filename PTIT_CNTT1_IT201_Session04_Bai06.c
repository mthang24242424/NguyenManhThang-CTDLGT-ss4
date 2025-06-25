#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[40];
    int age;
};

int main(void) {
    struct Student sv[5];
    for (int i = 0; i < 5; i++) {
        sv[i].id = i+1;
        printf("nhap ten sinh vien thu %d:",i+1);
        fgets(sv[i].name, 40, stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = 0;
        printf("nhap tuoi sinh vien:");
        scanf("%d", &sv[i].age);
        getchar();
    }
    int num;
    int check = 0;
    printf("nhap id kiem tra:");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++) {
        if (sv[i].id == num) {
            printf("id: %d \t",sv[i].id);
            printf("name: %s \t", sv[i].name);
            printf(" age: %d \t", sv[i].age);
            check = 1;
            break;
        }
    }
    if (!check) {
        printf("sv  ko ton tai");
    }
    return 0;
}

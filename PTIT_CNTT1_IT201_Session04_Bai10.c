#include <stdio.h>
#include <string.h>
#include<ctype.h>
struct Student {
    int id;
    char name[40];
    int age;
};
void lower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}
int main(void) {
    struct Student sv[5];
    for (int i = 0; i < 5; i++) {
        sv[i].id = i+1;
        printf("nhap ten sinh vien thu %d:",i+1);
        fgets(sv[i].name, 40, stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';
        printf("nhap tuoi sinh vien:");
        scanf("%d", &sv[i].age);
        getchar();
    }
    char checkName[40];
    printf("nhap ten sv can tim:");
    fgets(checkName, 40, stdin);
    checkName[strcspn(checkName, "\n")] = '\0';
    lower(checkName);

    int flag = 0;
    for (int i =0; i < 5; i++) {
        char nameLower[40];
        strcpy(nameLower,sv[i].name);
        lower(nameLower);

        if (strstr(nameLower,checkName)) {
            printf("id: %d \t name: %s \t age: %d \n",sv[i].id, sv[i].name,sv[i].age);
            flag = 1;
        }
    }
    if (!flag) {
        printf("ko tim thay sv nao");
    }
    return 0;
}

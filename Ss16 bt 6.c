#include<stdio.h>

struct sts {
    char name[100];
    int age;
    char phone[100];
    char email[100];
};

int main() {
    FILE *file;
    file = fopen("C:\\Users\\Admin\\Desktop\\Bt.txt", "w");


    struct sts s1[100];
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 0; i < n; i++) {
        printf("Nhap ho va ten hoc sinh %d : ",i+1);
        scanf("%s",&s1[i].name);
        printf("Nhap so tuoi: ");
        scanf("%d",&s1[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s",&s1[i].phone);
        printf("Nhap email: ");
        scanf("%s",&s1[i].email);
        printf("\n");
    }

    fwrite(s1, sizeof(struct sts), n, file);

    fclose(file);

    return 0;
}
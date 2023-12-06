#include<stdio.h>

struct sts {
    char name[20];
    int age;
    char phone[15];
    char email[20];
};

int main() {
    FILE *file;
    file = fopen("C:\\Users\\Admin\\Desktop\\Bt.txt", "w");


    struct sts s1[20];
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 0; i < n; i++) {
        printf("Nhap ho va ten hoc sinh %d : ",i+1);
        scanf("%s",&s1[i].name);
        fflush(stdin);
        printf("Nhap so tuoi: ");
        scanf("%d",&s1[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s",&s1[i].phone);
        printf("Nhap email: ");
        scanf("%s",&s1[i].email);
        printf("\n");
    }
    for(int i =0;i<n;i++)
    {
    	fprintf(file,"\nTen hoc sinh %d : %s\n",i+1,s1[i].name);
    	fprintf(file,"Tuoi hoc sinh %d : %d\n",i+1,s1[i].age);
    	fprintf(file,"Sdt hoc sinh %d : %s\n",i+1,s1[i].phone);
    	fprintf(file,"Email hoc sinh %d : %s\n",i+1,s1[i].email);
	}

//    fwrite(s1, sizeof(struct sts), n, file);
    fclose(file);

    return 0;
}
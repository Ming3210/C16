#include<stdio.h>
#include<stdlib.h>
int n;
//char str[20];
struct Book{
	int id;
	char name[20];
	char author[20];
	int price;
	char catelogy[20];
};
int main()
{
	
	FILE *file;
	file = fopen("C:\\Users\\Admin\\Desktop\\Bt.txt","w");
	struct Book b[100];
	do{
		int choice;
		
		printf("\nMENU\n");
		printf("1. Nhap so luong sach va thong tin sach\n");
		printf("2. Luu thong tin sach vao file\n");
		printf("3. Hien thi thong tin sach tu file\n");
		printf("4. Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so luong sach :");
				scanf("%d",&n);
				for(int i=0;i<n;i++)
				{
					printf("Id %d :",i+1); scanf("%d",&b[i].id);
					printf("Ten sach %d :",i+1); scanf("%s",&b[i].name);
					printf("Tac gia sach %d :",i+1); scanf("%s",&b[i].author);
					printf("Gia sach %d :",i+1); scanf("%d",&b[i].price);
					printf("The loai sach %d :",i+1); scanf("%s",&b[i].catelogy);
					printf("\n");
				}
				break;
			case 2:
				
				for(int i=0;i<n;i++)
				{
					fprintf(file,"\nId %d: %d\n",i+1,b[i].id);
					fprintf(file,"Ten sach %d : %s\n",i+1,b[i].name);
					fprintf(file,"Tac gia sach %d : %s\n",i+1,b[i].author);
					fprintf(file,"Gia sach %d : %d\n",i+1,b[i].price);
					fprintf(file,"The loai sach %d : %s\n",i+1,b[i].catelogy);
				}
				fclose(file);
				break;
			case 3:
				file = fopen("C:\\Users\\Admin\\Desktop\\Bt.txt","r+");
//				fread(str,sizeof(char),sizeof(str),file);
				for(int i=0;i<n;i++)
				{
				printf("Id %d : %d\n",i+1,b[i].id);
				printf("Ten sach %d : %s\n",i+1,&b[i].name);
				printf("Tac gia sach %d : %s\n",i+1,&b[i].author);
				printf("Gia sach %d : %d\n",i+1,b[i].price);
				printf("The loai sach %d : %s\n",i+1,&b[i].catelogy);
				printf("\n");
				}
				break;
			case 4:
				exit(0);
				
		}
	}while(1==1);
	return 0;
}
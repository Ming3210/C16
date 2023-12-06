#include<stdio.h>
int main()
{
	int row;
	FILE *file;
	char str[100];
	file = fopen("C:\\Users\\Admin\\Desktop\\Bt.txt","w");
	printf("Nhap so dong :");
	scanf("%d",&row);
	for(int i=0;i<row;i++)
	{
		printf("Nhap chuoi %d :",i+1);
		scanf("%s",&str);
		printf("\n");
		fprintf(file,"Chuoi %d : %s\n",i+1,str);
	}
	fclose(file);
}
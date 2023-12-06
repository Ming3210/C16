#include<stdio.h>
int main()
{
	int row;
	FILE *file;
	char strArr[100];
	file = fopen("C:\\Users\\Admin\\Desktop\\Bt.txt","w");
	printf("Nhap so dong :");
	scanf("%d",&row);
	for(int i=0;i<row;i++)
	{
		printf("Nhap chuoi %d :",i+1);
		scanf("%s",&strArr);
		printf("Chuoi %d : %s\n",i+1,strArr);
		printf("\n");
//		fprintf(file,"Chuoi %d : %s\n",i+1,str);
	}
	fclose(file);
}
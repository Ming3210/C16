#include<stdio.h>
int main()
{
	FILE *file ;
	char str[100];

	file = fopen("C:\\Users\\Admin\\Desktop\\Bt.txt","w+");
	printf("Nhap vao 1 chuoi :");
	gets(str);
//	fwrite(str,sizeof(char),sizeof(str),file);
	fprintf(file,"%s",str);
	fclose(file);
	return 0;
}
#include<stdio.h>
int main()
{
	int tuoi;
	FILE *file = NULL;
	file = fopen("C:\\Users\\Admin\\Desktop\\Demo.txt", "w+");
//	if(file != NULL)
//	{
//		fputc('M',file);
//		fclose(file);
//	}
////	if(file != NULL)
////	{
////		fputs("Me may beo",file);
////		fclose(file);
////	}
	if(file != NULL)
	{
		printf("Tuoi cua me ban :");
		scanf("%d",&tuoi);
	}
	fclose(file);
}
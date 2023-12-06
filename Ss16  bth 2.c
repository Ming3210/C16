#include<stdio.h>
int main()
{
	FILE *file = NULL;
	int character = 0;
	file=fopen("C:\\Users\\Admin\\Desktop\\Demo.txt","r");
	if(file!= NULL)
	{
		do{
			character = fgetc(file);
			printf("%c", character);
		}while (character != EOF);
		fclose(file);
	}
	return 0;
}
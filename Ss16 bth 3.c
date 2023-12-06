#include<stdio.h>
int main()
{
	FILE *file  = NULL;
	const int maxIndex = 1000;
	char arr[maxIndex] ;
	file = fopen("C:\\Users\\Admin\\Desktop\\Demo.txt","r");
	if(file != NULL)
	{
		fgets ( arr, maxIndex, file);
		printf("%s", arr);
		fclose(file);
	}
	return 0;
}
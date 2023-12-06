#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *file1, *file2 , *file3;
	char str;
	char str2;
	file1 = fopen("C:\\Users\\Admin\\Desktop\\Copy1.txt", "r");
 	file3 = fopen("C:\\Users\\Admin\\Desktop\\Copy2.txt","r");
  	file2 = fopen("C:\\Users\\Admin\\Desktop\\Bt.txt", "w");
 
	
	while (str != EOF) {
      	str = fgetc(file1);
      	if (str != EOF) {
         	fputc(str, file2);
      	}
	}
	while (str2 != EOF) {
      	str2 = fgetc(file3);
      	if (str2 != EOF) {
         	fputc(str2, file2);
      	}
	}
	return 0;
}
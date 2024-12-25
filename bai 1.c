#include <stdio.h>

int main (){
	char fullName[50];
	FILE *fptr;
	fptr = fopen("bt01.txt", "w");
	printf("nhap vao chuoi bay ky :");
	scanf("%s",&fullName);
	fprintf(fptr,"%s", fullName);
	fclose(fptr);
	return 0;
}

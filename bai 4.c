#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("bt01.txt","r");
	char fullName[100];
	fgets(fullName, sizeof(fullName), f);
	printf("Dong dau tien cua file: %s", fullName);
	fclose(f);
	return 0;
}

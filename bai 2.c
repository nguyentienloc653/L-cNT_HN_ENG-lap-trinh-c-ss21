#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("bt01.txt","r");
	char kyTu=fgetc(f);
	printf("Ki tu dau tien trong file la: %c", kyTu);
	fclose(f);
	return 0;
}

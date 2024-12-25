#include<stdio.h>
int main (){
	FILE *f1, *f2;
	f1 = fopen("bt01.txt","r");
	f2 = fopen("bt06.txt","w");
	char buff[100];
	fgets(buff,100,f1);
	fputs(buff,f2);
	fclose(f1);
	fclose(f2);
	
	return 0;
}

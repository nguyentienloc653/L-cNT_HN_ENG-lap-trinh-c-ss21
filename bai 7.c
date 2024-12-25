#include<stdio.h>
#include<string.h>
struct SinhVien{
	int id;
	char fullName[50];
	int age;
};
int main(){
	FILE *f;
	int n;
	printf("Ban hay nhap so luong sinh vien: ");
	scanf("%d", &n);
	getchar();
	struct SinhVien sinhVien[n];
	for(int i=0; i<n; i++){
		printf("Nhap thong tin sinh vien thu %d:\n", i+1);
		printf("Ban hay nhap ID sinh vien: ");
		scanf("%d", &sinhVien[i].id);
		getchar();
		
		printf("Ban hay nhap ten day du cua sinh vien: ");
		fgets(sinhVien[i].fullName, sizeof(sinhVien[i].fullName), stdin);
		
		printf("Ban hay nhap tuoi cua sinh vien: ");
		scanf("%d", &sinhVien[i].age);
		getchar();
	}
	f=fopen("students.txt","w");
	for(int i=0; i<n; i++){
		fprintf(f, "ID: %d, Ho ten sinh vien: %s, Tuoi sinh vien: %d \n", sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age);
	}
	fclose(f);
	printf("Thong tin sinh vien da duoc them thanh cong.");
}

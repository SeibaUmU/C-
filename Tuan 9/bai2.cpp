#include<stdio.h>
#include<conio.h>
#include<string.h>
int n;
struct nhanvien{
	char ten[20];
	char diachi[50];
};
void soluong(){
	do{
		printf("Nhap so nhan vien: ");
		scanf("%d", &n);
	}
	while (n<0 || n>50);
}
void nhap(nhanvien a[], int n){
for (int i=0; i<n; i++){
fflush(stdin);
printf("Ten nhan vien thu %d: ",i+1);
gets(a[i].ten);
printf("Nhap dia chi: ");
gets(a[i].diachi);
}
}
void xuat(nhanvien a[], int n){
	printf("STT    HO&TEN         DIACHI\n");
	for (int i=0; i<n; i++){
	printf("%d %10s %10s \n", i+1, a[i].ten, a[i].diachi);
}}
void sapxep(nhanvien a[], int n)
{
for(int i=0; i<n-1; i++){
	int min = i;
for(int j=i+1; j<n; j++){
if(stricmp(a[j].ten, a[min].ten)<0)
min = j;
}
nhanvien temp = a[i];
a[i]= a[min];
a[min] = temp;
}
}
main (void){
	nhanvien a[50];
	soluong();
	nhap(a, n);
	sapxep(a, n);
	xuat(a, n);
	getch();
	}

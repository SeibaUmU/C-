#include <stdio.h>
#include<conio.h>
#include<string.h>
struct dan{
	char ten[20];
	char diachi[50];
	int tuoi;
};
void nhap(dan a[], int n){
for (int i=0; i<n; i++){
	fflush(stdin);
printf("Ho ten: ");
gets(a[i].ten);
printf("Dia chi: ");
gets(a[i].diachi);
printf("Tuoi: ");
scanf("%d", &a[i].tuoi);
}
}
void kiemtra(dan a[], int n){
	char ten2[20];
	int tuoi2;
	fflush(stdin);
	printf("Nhap ho ten nguoi can kiem tra: ");
	gets(ten2);
	printf("Tuoi: ");
	scanf("\n%d", &tuoi2);
	int cout = 0;
	for (int i=0; i<n; i++){
		if (strcmpi(a[i].ten, ten2)==0 && a[i].tuoi == tuoi2)
		cout++;}
	if (cout == 0){
		printf("Khong co ai ten %s, %d tuoi trong danh sach\n", ten2, tuoi2);
	}
	else {
	if (cout == 1){
		printf("Chi co %d nguoi ten %s, %d tuoi trong danh sach\n", cout, ten2, tuoi2);
			for (int i=0; i<n; i++){
		if (strcmpi(a[i].ten, ten2)==0 && a[i].tuoi == tuoi2)
		printf("Dia chi: %s \n", a[i].diachi);}
	}
	else {
	printf("Co %d nguoi trung ten %s, %d tuoi trong danh sach\n", cout,ten2,tuoi2);
		for (int i=0; i<n; i++){
		if (strcmpi(a[i].ten, ten2)==0 && a[i].tuoi == tuoi2)
		printf("Dia chi nguoi %d: %s \n", i+1, a[i].diachi);
}}}}
void inds(dan a[], int n){
	printf("----------Danh sach khu pho----------\n");
	printf ("STT Ho&Ten               Tuoi Dia chi \n");
	for (int i=0; i<n; i++)
	printf("%d   %4s %5d %4s \n",i+1, a[i].ten, a[i].tuoi, a[i].diachi);
}
main (void){
	int n;
	dan a[100];
	do {
	printf("Nhap so luong: ");
	scanf("%d", &n);}
	while (n<=0 || n>100);
	nhap(a, n);
	kiemtra(a, n);
	inds(a, n);
}

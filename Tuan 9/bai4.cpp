#include<stdio.h>
#include<string.h>
struct thongtin{
	char ten[20];
	char quan[20];
	char phuong[20];
	int to, tuoi;
	unsigned long long luong;
};
void tim(thongtin a[], int n){
	printf("Ho va ten     Quan    Phuong    To    Tuoi    Luong\n");
	for (int i=0; i<n; i++){
	if (strcmpi(a[i].quan, "10")==0 && a[i].tuoi <30 && a[i].luong >500000)
		printf("%s %5s %4s %4d %4d %2llu \n", a[i].ten, a[i].quan, a[i].phuong, a[i].to, a[i].tuoi, a[i].luong);
	}
}
main (void){
	int n;
	thongtin a[50];
	printf("Nhap so luong nguoi can nhap: ");
	scanf("%d", &n);
	fflush(stdin);
	for (int i=0; i<n; i++){
	printf("Ho va ten: ");
	gets(a[i].ten);
	printf("Quan: ");
	gets(a[i].quan);
	printf("Phuong: ");
	gets(a[i].phuong);
	printf("To: ");
	scanf("%d", &a[i].to);
	printf("Tuoi: ");
	scanf("%d", &a[i].tuoi);
	printf("Luong: ");
	scanf("%llu", &a[i].luong);
	fflush(stdin);
}
tim(a, n);
}

#include<stdio.h>
#include<string.h>
#include<conio.h>
int n;
struct thongtin{
	char hoten[20];
	unsigned long long luongcoban, tienphucap, tienbaohiem, luong;
};
void nhapvatinh(thongtin a[]){
	do {
	printf("Nhap so luong nhan vien: ");
	scanf("%d",&n);
}
	while(n<=0 || n>=90);
	for(int i=0; i<n;i++){
	fflush(stdin);
	printf("Ho va ten: ");
	gets(a[i].hoten);
	printf("Tien luong co ban: ");
	scanf("%llu",&a[i].luongcoban);
	printf("Tien phu cap tham nien: ");
	scanf("%llu",&a[i].tienphucap);
	printf("Tien bao hiem xa hoi: ");
	scanf("%llu",&a[i].tienbaohiem);
	a[i].luong=a[i].luongcoban+a[i].tienphucap-a[i].tienbaohiem;}
}
void xuat(thongtin a[]){
	printf("%s \t %5s \t %13s \t %12s \t %14s \t %6s ","STT","HO&TEN","T.LCB","T.PC","T.BHXH","T.LUONG");
	printf("\n");
	for (int i=0;i<n;i++){
		printf("%d \t %5s \t %5llu \t %5llu \t %5llu \t %5llu ",i+1,a[i].hoten,a[i].luongcoban,a[i].tienphucap,a[i].tienbaohiem,a[i].luong);
		printf("\n");
	}
}
void max(thongtin a[]){
	printf("Nhan vien co tien luong cao nhat: \n");
	printf("%5s \t %13s \t %12s \t %14s \t %6s ","HO&TEN","T.LCB","T.PC","T.BHXH","T.LUONG\n");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(a[j].luong>a[i].luong){
			thongtin temp = a[i];
			a[i]=a[j];
			a[j]=temp;}}}
	printf("%5s \t %5llu \t %5llu \t %5llu \t %5llu ",a[0].hoten,a[0].luongcoban,a[0].tienphucap,a[0].tienbaohiem,a[0].luong);
}
void min(thongtin a[]){
	printf("\nNhan vien co tien luong thap nhat: \n");
	printf("%5s \t %13s \t %12s \t %14s \t %6s ","HO&TEN","T.LCB","T.PC","T.BHXH","T.LUONG\n");
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
		if(a[i].luong<a[j].luong){
			thongtin temp = a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}}
	printf("%5s \t %5llu \t %5llu \t %5llu \t %5llu ",a[n-1].hoten,a[n-1].luongcoban,a[n-1].tienphucap,a[n-1].tienbaohiem,a[n-1].luong);	
}
int main(){
	thongtin a[91];
	nhapvatinh(a);
	xuat(a);
	max(a);
	min(a);
	getch();
}	

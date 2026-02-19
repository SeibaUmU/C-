#include<stdio.h>
#include<conio.h>
int n;
struct sinhvien{
	char ten[20];
	int mssv;	
	float dt;
	float dl;
	float dh;
	float dtb;
};
int soluong(){
	do{
		printf("nhap so luong sinh vien ");
		scanf("%d",&n);
	}while(n<=0||n>70);}
int nhap(sinhvien a[],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("Nhap ho va ten sinh vien thu %d ",i+1);
		gets(a[i].ten);
		printf("nhap ma so sinh vien ");
		scanf("%d",&a[i].mssv);
		do{
		printf("nhap diem toan ");
		scanf("%f",&a[i].dt);}
		while(a[i].dt > 10||a[i].dt < 0);
	    do{
		printf("nhap diem ly ");
		scanf("%f",&a[i].dl);}
	    while(a[i].dl > 10||a[i].dl < 0);
	    do{
	    printf("nhap diem hoa ");
		scanf("%f",&a[i].dh);}
		while(a[i].dh > 10||a[i].dh < 0);
		a[i].dtb=(a[i].dt+a[i].dl+a[i].dh)/3;
		
		}}
void xuat(sinhvien a[],int n){
printf ("-------------Danh sach sinh vien------------- \n ");
printf("STT HO&TEN   MSSV   DTB   XepLoai \n");
for (int i=0;i<n;i++)
if(a[i].dtb>=8)
printf ("%d %10s %5d   %.2f  Gioi \n",i+1,a[i].ten,a[i].mssv,a[i].dtb);
else if(a[i].dtb>=6.5&&a[i].dtb<8)
printf ("%d %10s %5d   %.2f  Kha \n",i+1,a[i].ten,a[i].mssv,a[i].dtb);
else if(a[i].dtb>=5&&a[i].dtb<6.5)
printf ("%d %10s %5d   %.2f  TrungBinh \n",i+1,a[i].ten,a[i].mssv,a[i].dtb);
else if(a[i].dtb<5)
printf ("%d %10s %5d   %.2f  Yeu \n",i+1,a[i].ten,a[i].mssv,a[i].dtb);
}
main (void) { 
sinhvien a[50];
soluong();
nhap(a,n);
xuat(a,n);
getch(); 
}

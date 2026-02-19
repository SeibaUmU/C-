 #include<stdio.h>
 #include	<conio.h>
 #include<math.h>
 int n;
 int i;
 int j;
 	struct thongtin {
 	char ten[50];
 	int luong1ngay;
 	int songaylamchinh;
 	int	songaylamthem;
 	int luong;
 	int sonhanvien;
 }a[50];
 void soluong(){
 	do{
 	printf("So nhan vien trong cong ty la \n ");
 	scanf("%d", &n);}
 	while(n<0 || n>80);
 }
 void nhap(thongtin [],int n){
 	for(int i=0;i<n;i++){
 		fflush(stdin);
	 	printf("ho va ten nhan vien thu %d la\n", i+1);
	 	gets(a[i].ten);
	 	printf("Tien luong 1 ngay lam cong la\n ");
	 	scanf("%d", &a[i].luong1ngay);
	 	printf("So ngay lam viec chinh thuc la\n ");
		scanf("%d", &a[i].songaylamchinh);
		printf("So ngay lam them la\n ");
		scanf("%d", &a[i].songaylamthem);
a[i].luong=((a[i].luong1ngay*a[i].songaylamchinh)+(a[i].luong1ngay*a[i].songaylamthem));	 	
}}
void xuat(thongtin a[],int n){
printf("---------------THONG TIN NHAN VIEN---------------\n");
printf("STT    HoVaTen    SONGAYLV    SONGAYLT      T.LUONG\n");
for(i=0;i<n;i++){
printf("%d      %20s        %5d          %5d           %10d\n",i+1,a[i].ten,a[i].songaylamchinh,a[i].songaylamthem,a[i].luong);
}}
void sapxep(thongtin a[], thongtin temp[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].luong<a[j].luong){
				temp[0]=a[i];
				a[i]=a[j];
				a[j]=temp[0];		
			}
		}
		
	}
	printf("Nhan vien co tien luong cao nhat: \n");
	printf("HoVaTen    SONGAYLV    SONGAYLT      T.LUONG\n");
	printf("%s         %d          %9d           %8d\n", a[0].ten,a[0].songaylamchinh,a[0].songaylamthem,a[0].luong);
	printf("Nhan vien co tien luong thap nhat: \n");
	printf("HoVaTen    SONGAYLV    SONGAYLT      T.LUONG\n");
	printf("%s         %d          %9d           %8d\n", a[n-1].ten,a[n-1].songaylamchinh,a[n-1].songaylamthem,a[n-1].luong);
}

main (void){
thongtin a[50];
thongtin temp[50];
soluong();
nhap(a,n);
xuat(a,n);
sapxep(a, temp, n);
getch();
}

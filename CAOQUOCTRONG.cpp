#include<stdio.h>
#include<conio.h>
int n;
struct thongtin{
	char hoten[20];
	int tuoi;
	int luongcoban;
	int phucapthamnien;
	int baohiemxh;
	int luong;
};

void nhapsoluong(){
	do{
		printf("Nhap so luong nhan vien cong ty: ");
		scanf("%d", &n);
	}
	while(n<=0||n>=35);
}

void nhaplieu(thongtin a[],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("\nTen nhan vien thu %d: ", i+1);
		gets(a[i].hoten);
		printf("Tuoi: ");
		scanf("%d", &a[i].tuoi);
		printf("Tien luong co ban: ");
		scanf("%d", &a[i].luongcoban);
		printf("Tien phu cap tham nien: ");
		scanf("%d", &a[i].phucapthamnien);
		printf("Tien bao hiem xa hoi: ");
		scanf("%d", &a[i].baohiemxh);
	}
}

void tinhluong(thongtin a[], int n){
	for(int i=0;i<n;i++){
		if(a[i].tuoi>40){
		a[i].phucapthamnien=a[i].phucapthamnien*2;}
		a[i].luong = a[i].luongcoban + a[i].phucapthamnien - a[i].baohiemxh;
	}
}

void xuat1(thongtin a[],int n){
	printf("    STT   HO&TEN    TUOI   T.LCB    T.PC    T.BHXH   T.LUONG\n");
	for(int i=0;i<n;i++){
		printf("%6d%10s%7d%9d%8d%10d%10d\n", i+1, a[i].hoten, a[i].tuoi, a[i].luongcoban, a[i].phucapthamnien, a[i].baohiemxh, a[i].luong);
	}
}

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
}

void xuat2(thongtin a[], int n){
	printf("Nhan vien co tien luong cao nhat: \n");
	printf("   HO&TEN    TUOI   T.LCB    T.PC    T.BHXH   T.LUONG\n");
	printf("%10s%7d%9d%8d%10d%10d\n", a[0].hoten, a[0].tuoi, a[0].luongcoban, a[0].phucapthamnien, a[0].baohiemxh, a[0].luong);
	printf("Nhan vien co tien luong thap nhat: \n");
	printf("   HO&TEN    TUOI   T.LCB    T.PC    T.BHXH   T.LUONG\n");
	printf("%10s%7d%9d%8d%10d%10d\n", a[n-1].hoten, a[n-1].tuoi, a[n-1].luongcoban, a[n-1].phucapthamnien, a[n-1].baohiemxh, a[n-1].luong);
	
}

main(void){
	thongtin a[50];
	thongtin temp[50];
	nhapsoluong();
	nhaplieu(a,n);
	tinhluong(a,n);
	xuat1(a,n);
	sapxep(a,temp,n);
	xuat2(a,n);
	getch();
}

#include <stdio.h> 
#include <conio.h> 
int x, y, z, m, k, l;
struct vdv
{
char ten[20];
};
struct thoidiemdi{
int giodi;
int phutdi;
int giaydi;	
}b;
struct thoidiemden{
int gioden;
int phutden;
int giayden;}c;
void thoigian(){
	x = b.giodi*3600 + b.phutdi*60 + b.giaydi;
	y= c.gioden*3600 + c.phutden*60 + c.giayden;
	z = y - x;
	m = z/3600;
	k = z%3600/60;
	l = z%3600%60;
}	
main (void) { 
vdv a;
printf("Nhap Ho & ten: ");
gets (a.ten);
printf("Thoi diem di: ");
scanf("%2d%2d%2d", &b.giodi,&b.phutdi,&b.giaydi);
printf("Thoi diem den: ");
scanf("%2d%2d%2d", &c.gioden,&c.phutden,&c.giayden);
thoigian();
printf ("Thong tin van dong vien \n ");
printf ("Ho va ten van dong vien: %s \n ",a.ten);
printf("Thoi gian van dong vien nay chay la: %2d/%2d/%2d\n", m,k,l);
getch();
}

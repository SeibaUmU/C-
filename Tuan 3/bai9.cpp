#include<stdio.h>
#include<conio.h>
main (void)
{
int x, y;
char a;
printf("Nhap x: ");
scanf("%d", &x);
printf("Nhap y: ");
scanf("%d", &y);
fflush(stdin);
printf("Nhap phep tinh: ");
scanf("%c", &a);
switch(a)
{
	case '+' : printf("x + y = %d\n", x+y); break;
	case '-' : printf("x - y = %d\n", x-y); break;
	case '*' : printf("x*y = %d\n", x*y); break;
	case '%' : 
	if (y==0) 
	{ printf("Khong chia duoc");}
	else
	printf("x%%y = %d\n", x%y); break;
default: printf("sai");
}
}

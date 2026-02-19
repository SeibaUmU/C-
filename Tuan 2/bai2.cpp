#include <stdio.h> 
#include <conio.h> 
main(void) 
{ 
int a, b, c, d; 
printf("Nhap vao so a: "); 
scanf("%d", &a); 
printf("Nhap vao so b: "); 
scanf("%d", &b); 
printf("Nhap vao so c: "); 
scanf("%d", &c);
printf("Nhap vao so d: "); 
scanf("%d", &d);
if (a > b)
if (a>c)
if (a>d)
		printf("so lon nhat la:%d\n",a);
		else
		printf("So lon nhat la: %d\n", d);
	else
	if (c>d)
	printf("So lon nhat la: %d\n", c);
	else
	printf("So lon nhat la: %d\n", d);
else
if (b>c)
if (b>d)
		printf("So lon nhat la: %d\n", b);
		else
		printf("So lon nhat la: %d\n", d);
	else
	if (c>d)
	printf("So lon nhat la: %d\n", c);
	else
	printf("So lon nhat la: %d\n", d);
}


 

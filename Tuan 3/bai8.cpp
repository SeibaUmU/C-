#include<stdio.h>
#include <conio.h> 
main(void) 
{ 
char color;
printf("Nhap bien ky tu color: ");
scanf("%c", &color);
switch(color) 
{
	case 'R' : case 'r' : printf("RED"); break;
	case 'G' : case 'g' : printf("GREEN"); break;
	case 'B' : case 'b' : printf("BLUE"); break;
default: printf("BLACK");
}
}



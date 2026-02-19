#include <conio.h>
#include <stdio.h>
char i,a,b,c;
main (void)
{  
printf ("Nguoi A chon  ");  
scanf("%c",&i);
fflush(stdin); 
switch (i)
{    
	case 'g': printf("Nguoi B chon  "); //truonghopGiay    
	scanf("%c",&a);  
	switch (a)    {      
	case 'b' : case 'B' : printf("thang"); break;  // b:búa, k:kéo, g:giay     
	case 'k' : case 'K' : printf("thua"); break;      
	case 'g' : case 'G' : printf("hoa"); break;      
	default: printf("sai");    
}  break;
		case 'b': printf("Nguoi B chon  "); //truonghopbao  
		scanf ("%c",&b);    
		switch (b)    {      
		case 'k' : case 'K': printf("thang"); break;      
		case 'g' : case 'G': printf("thua");  break;      
		case 'b' : case 'B': printf("hoa");   break;      
		default: printf("sai");    
}  break;
			case 'k': printf("Nguoi B chon  "); //truonghopkeo    
			scanf("%c",&c);   
			switch (c)    {      
			case 'b' : case 'B': printf("thua"); break;      
			case 'g' : case 'G': printf("thang"); break;      
			case 'k' : case 'K': printf("hoa"); break;      
			default: printf("sai");
 } break;
default: printf("sai");
}
}

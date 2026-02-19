#include<stdio.h>
char n;
void ky_tu_vua_nhap_la()
{
	if((48<=n) && (n<=57)){ //decimal
		printf("ky tu so");}
else	
	if((n>='a') && (n<='z')){
	printf("ky tu thuong");}
	else 
		if((n>='A') && (n<='Z')){
		printf("ky tu hoa");}
		else{
			printf("ky tu khac");}
}
main (void)
{
	printf("Nhap 1 ky tu: ");
	scanf("%c",&n);
	ky_tu_vua_nhap_la();
}

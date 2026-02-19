#include<stdio.h>
#include<string.h>
main (void){
	char chuoi[50];
	puts("Nhap chuoi: ");
	gets(chuoi);
	printf("Chuoi: ");
	for (int i=0; i<=strlen(chuoi);i++){
		if (chuoi[i]>=65 && chuoi[i]<=90)
		chuoi[i]+=32;
		else if (chuoi[i]>=97 && chuoi[i]<=122)
		chuoi[i]-=32;
	}
	puts(chuoi);
}

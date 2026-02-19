#include<stdio.h>
#include<string.h>
#define Size1 60
#define Size2 40
main (void){
	char chuoi1[Size1], chuoi2[Size2], chuoi3[100];
	int temp;
	printf("Nhap chuoi 1: ");
	gets(chuoi1);
	temp = strlen(chuoi1);
	fflush(stdin);
	printf("Nhap chuoi 2: ");
	gets(chuoi2);
	fflush(stdin);
	strcat(chuoi1, chuoi2);
	printf("Chuoi 3 la: %s\n", chuoi1);
	printf("Do dai chuoi 1 la: %d\n", temp);
	printf("Do dai chuoi 2 la: %d\n", strlen(chuoi2));
	printf("Do dai chuoi 3 la: %d", strlen(chuoi1));
	
}


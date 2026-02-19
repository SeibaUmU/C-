#include<stdio.h>
#include<string.h>
int main()
{
	char chuoi[50];
	int length, dem_a=0, dem_c=0;
	printf("Nhap vao chuoi: ");
	gets(chuoi);
	length = strlen(chuoi);
	printf("Do dai chuoi: %d\n", length);
	for (int i =0; i<length; i++)
	{	if(chuoi[i]=='a'||chuoi[i]=='A'){
		dem_a++;
	}
	if(chuoi[i]=='c' || chuoi[i]=='C'){
		dem_c++;
	}
	}
	printf("so lan xuat hien cua a/A: %d\n", dem_a);
	printf("so lan xuat hien cua c/C: %d\n", dem_c);
}

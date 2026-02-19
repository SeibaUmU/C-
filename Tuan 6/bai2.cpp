#include<stdio.h>
int N;
void tinh_tong()
{ int S=0;
	for(int i=0;i<=N;i++)
	S = S + i;
	printf("Tong = %d\n", S);
}
main (void)
{	do{
		printf("Nhap so nguyen: ");
		scanf("%d", &N);
	}
	while(N<=0 || N>20);
	tinh_tong();
}

#include<stdio.h>
int N;
void tinh_giai_thua()
{	int giai_thua=1;
	for (int i =1;i<=N;i++)
	giai_thua=giai_thua*i;
	printf("%d!=%d",N,giai_thua);
}
main (void)
{
	printf("Nhap vao N\n");
	scanf("%d", &N);
	tinh_giai_thua();
}

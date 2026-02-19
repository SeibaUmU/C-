#include<stdio.h>
#include<math.h>
#include<conio.h>
main (void){
	int N,giai_thua=1;
	printf("Nhap vao N\n");
	scanf("%d", &N);
	for (int i =1;i<=N;i++)
	giai_thua=giai_thua*i;
	printf("%d!=%d",N,giai_thua);
}

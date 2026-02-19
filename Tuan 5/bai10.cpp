#include<stdio.h>
#include<stdlib.h>
main (void){
	int N,x ,a=0 ,b=0 ,c=0;
	do{
		printf("Nhap so nguyen: ");
		scanf("%d", &N);
	}
	while(N<=0 || N>10);
	for (int i=1; i<=N; i++){
	printf("Nhap so thu %d :", i);
	scanf("%d", &x);
	if(x<0)
	 a++;
	 else if (x>0)
	 b++;
	 	else
	 	 c++;}
	printf("co %d so am\n", a);
	printf("co %d so duong\n", b);
	printf ("co %d so 0", c);
	//exit(0);
	 
}

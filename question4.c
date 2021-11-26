#include<stdio.h>
main()
{
	int m,h;
	printf("enter m");
	scanf("%d%d",&m,&h);
	h=m/60;
	m=m%60;
	printf("time : %d hr %d min",h,m);
}
	
	

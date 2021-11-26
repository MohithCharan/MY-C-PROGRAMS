#include<stdio.h>
main()
{
	int m,h;
	printf("enter m");
	scanf("%d",&m,&h);
	h=m/60;
	m=m%60;
	printf("time is %d hr %d min",h,m);
}
	
	

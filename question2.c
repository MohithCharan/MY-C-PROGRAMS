#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d , b=%d",a,b);
}

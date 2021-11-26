#include<stdio.h>
main()
{
	int a,b;
	printf("before swaping");
	printf("\n enter a,b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping");
	printf("\n a=%d , b=%d",a,b);
}

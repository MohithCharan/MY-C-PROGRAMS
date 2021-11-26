#include<stdio.h>
main()
{
	float x,y,a,b,c,d;
	printf("enter x,y");
	scanf("%f%f",&x,&y);
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	printf("\n %f+%f is %f",x,y,a);
	printf("\n %f-%f is %f",x,y,b);
	printf("\n %f*%f is %f",x,y,c);
	printf("\n %f/%f is %f",x,y,d);
}

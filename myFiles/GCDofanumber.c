#include<stdio.h>
int main()
{
	int a,b,rem;
	scanf("%d",&a);
	scanf("%d",&b);
	while(b%a!=0)
	{
		rem=b%a;
		b=a;
		a=rem;
	}
printf("%d",a);		
		
}


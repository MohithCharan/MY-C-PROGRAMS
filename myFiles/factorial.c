//. Find factorial of a given number.

#include<stdio.h>
int main()
{	int i,n,fact;
	scanf("%d",&n);
	fact=1;
	for(i=1;i<=n;i++)
	{ 
		fact=fact*i;
	}
	printf("factorial of %d and %d :",n,fact);
	return(0);
   
}

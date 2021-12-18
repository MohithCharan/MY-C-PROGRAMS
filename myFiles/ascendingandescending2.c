 /* 5. Given an integer N, print all the even numbers from 0 to N in descending order*/
#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	
	if(n%2==0)
	{
		 i=n;
	}else
	{
		i=n-1;
	}
	while(i>=0)
	{
		printf("%d\t",i);
		i=i-2;
	}
}

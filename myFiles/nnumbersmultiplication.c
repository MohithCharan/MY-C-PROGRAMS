#include<stdio.h>
int main()
{
	int i,n,sum=1,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum=sum*num;
		
	}
	printf("%d",sum);
	
}

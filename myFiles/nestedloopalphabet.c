#include<stdio.h>
int main()
{
	int i,n,j;
	char alpha='A';
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",alpha);
		}
		printf("\n");
		alpha=alpha+1;
	}
	}
	


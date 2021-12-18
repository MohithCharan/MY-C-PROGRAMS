/*3. Given an integer N, print all the odd numbers from 1 to N in ascending order.*/

#include<stdio.h>
int main()
{
	int i=1,N;
	scanf("%d",&N);
	while(i<=N)
	{
		printf("%d \n",i);
		i=i+2;
	}
	
}

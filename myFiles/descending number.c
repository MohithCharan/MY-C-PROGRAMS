/*5. Given an integer N, print all the even numbers from 0 to N in descending order.*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=n;
	while(i>=0)
	{
	
		if(i%2==0)
	{
		printf("%d\t",i); 
        i=i-2;  
	}
else{
	i=n-1;
	printf("%d\t",i);
	i=i-2;
}
}
}

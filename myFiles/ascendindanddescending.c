














/*4. Given two integers A and B. Print all numbers from A to B inclusively, in ascending order, if
 A < B,or in descending order, if A => B.*/
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	int i=a;
	scanf("%d",&b);
	if(i<=b){
		while(i<=b)
		{
			printf("%d",i);
           i++;	
		}
	}
		else
		{
			while(i>=b)
			{
				printf("%d",i);
				i--;
			}
		}
	
}

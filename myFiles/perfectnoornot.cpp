//3. Write a C program to find whether a given number is perfect number or not.

#include<stdio.h>
int main()
{
	 int num,i,sum;
	 scanf("%d",&num);
	 i=1;
	 sum=0;
	while(num%i==0)
	 { printf("%d\t",i);
	 sum=sum+i;
	 i=i+1;
	 }
	if(num==sum)
	{ printf("\nit is prefect number");
	
	 }
	 else
	 { printf("\nit is not prefect number");
	
	 }
	  
}

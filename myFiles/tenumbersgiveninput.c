/*6. 10 numbers are given in the input. Read them and print their sum. Use as few variables as you can*/

#include<stdio.h>
int main()
{
	int i,sum=0,num;
   for(i=0 ;i<=10;i++)
   {  
   	scanf("%d",&num);
   	sum=sum+num; 	
   }
   printf("%d",sum);
	
}

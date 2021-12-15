// 10 numbers are given in the input. Read them and print their sum. Use as few variables as you can.//

#include<stdio.h>
int main()
{ int i,n,num,sum;
 n=10;
 i=1;
sum=0;
for(i=1;i<=10;i++)
{ 
    scanf("%d",&num);
sum=sum+num;
 
 }
 printf("the sum of all numbers is: %d",sum);
}

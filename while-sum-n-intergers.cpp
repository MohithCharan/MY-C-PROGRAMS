/*7. N numbers are given in the input. Read them and print their sum.*/

#include<stdio.h>
int main()
{ int i,n,num,sum;
 scanf("%d",&n);
 i=1;
sum=0;
for(i=1;i<=n;i++)
{ 
    scanf("%d",&num);
sum=sum+num;
 
 }
 printf("the sum of all numbers is: %d",sum);
}

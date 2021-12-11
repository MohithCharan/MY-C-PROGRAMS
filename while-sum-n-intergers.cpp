/*7. N numbers are given in the input. Read them and print their sum.*/

#include<stdio.h>
int main()
{ int i,n,sum;
 scanf("%d",&n);
 i=2;
 while(i<=n)
 { 
 sum=sum+i;
 i=i+1;
 }
 printf("the sum of all numbers is: %d",sum);
}

/*8. N numbers are given in the input. Read them and print their product.*/

#include<stdio.h>
int main()
{ int i,n,num,product;
 scanf("%d",&n);
 i=1;
product=1;
for(i=1;i<=n;i++)
{ 
    scanf("%d",&num);
 product=product*num;

 }
 printf("the product of all numbers is: %d",product);
}

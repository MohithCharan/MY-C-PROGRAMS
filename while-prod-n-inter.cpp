/*8. N numbers are given in the input. Read them and print their product.*/

#include<stdio.h>
int main()
{ int i,n,product;
 scanf("%d",&n);
 i=2;
 while(i<=n)
 { 
 product=product*i;
 i=i+1;
 }
 printf("the product of all numbers is: %d",product);
}

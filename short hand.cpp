#include<stdio.h>
int main ()
{ 
  int a,b;
  printf("enter the value of a:");
  scanf("%d",&a);
  printf("enter the value of b:");
  scanf("%d",&b);
  a+=10;
  b-=10;
  printf("a+=10 => %d\n",a+=10);
  printf("b-=10 => %d",b-=10);
  return(0);
}

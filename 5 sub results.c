#include<stdio.h>
int main() 
{ 
  int n1,n2,n3,n4,n5,totalmarks;
  
  float avg,per;
  
  printf("enter the english:");
  scanf("%d",&n1);
  
  printf("enter the computer:");
  scanf("%d",&n2);
  
  printf("enter the maths:");
  scanf("%d",&n3);
  
  printf("enter the clad:");
  scanf("%d",&n4);
  
  printf("enter the veld:");
  scanf("%d",&n5);
  
  totalmarks=n1+n2+n3+n4+n5;
  
  printf("the total marks is %d",totalmarks);
  
  avg=totalmarks/5;
  
  printf("the average marks is %f ",avg);
  
  per=avg;
  
  printf("the percentage is %f",per);
  
  return(0);  
  }

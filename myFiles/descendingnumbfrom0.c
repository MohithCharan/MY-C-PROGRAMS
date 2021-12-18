/*5. Given an integer N, print all the even numbers from 0 to N in descending order.*/

#include<stdio.h>
{
    int i=0,n;
    scanf("%d",&n);
    if(n%2==0)
    {
        i=n;
    }
    else
    {
        i=n-1;
    }
    while(0<=i)
    {
        printf("%d",i);
        i=i-2;
    }
    
    
            return 0;
}


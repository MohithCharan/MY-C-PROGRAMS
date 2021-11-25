#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c==d)
    {
    	printf("Yes");
	}
	
	else if (a+1==c)
    {
        if(b==d)
        {
            printf("Yes");
        }
        else
        { 
           printf("NO");
		}
    }
    else if (a-1==c)
    {
        if(b==d)
        {
            printf("Yes");
        }
        else
        { 
           printf("NO");
		}
    }
    else if (b+1==d)
    {
        if(a==c)
        {
            printf("Yes");
        }
        else
        { 
           printf("NO");
		}
    
	}
	else if (b-1==d)
    {
        if(a==c)
        {
            printf("Yes");
        }
        else
        { 
           printf("NO");
		}
    
	}
   else 
   {
   	 printf("No");
    }
}

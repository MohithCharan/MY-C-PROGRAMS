#include<stdio.h>
int main()
{ int a,s,d,f,g;
 scanf("%d%d%d%d",&a,&s,&d,&f);
 g=(a+s+d+f)%2;
  if(g==0)
   { printf("YES");}
   else
   {printf("NO");}
}

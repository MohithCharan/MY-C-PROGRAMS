/*6. 10 numbers are given in the input. Read them and print their sum. Use as few variables as you
can.*/
 
 #include<stdio.h>
int main()
{ int a,b,c;
   scanf("%d",&a);
  a=a;
  b=a+9;
   if (a<=b)
   { 
 do
   {
    c=c+a;
    a=a+1;
	}while(a<=b);
   }
   printf("\nthe sum is:%d",c);


   
  return 0;
}

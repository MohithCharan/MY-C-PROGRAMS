#include<stdio.h>
	int main()
	{
	
	 int num,orginalnum,digit;
	 scanf("%d",&orginalnum); 
	 num=orginalnum;
	int rev=0;
	 while(num>0)
	 {
	 	digit=num%10;
	 	rev=digit+rev*10;
	 	num=num/10;
		 }	
if(rev==orginalnum)
{
	printf("it is a palindrome");
}
else{
	printf("it is not a palindrome");
}
	
}

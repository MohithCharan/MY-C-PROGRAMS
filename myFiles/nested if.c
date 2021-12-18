#include<stdio.h>
int main()
{
	char gender;
	int age,kms,price;
      printf("enter the age :");
      scanf("%d",&age);
      if(age<=5)
      {
      	printf("no ticket is required");
	   }
	  else if(age>5&&age<=12)
	  {
	  	printf("the no of kms travelled :");
	  	scanf("%d",&kms);
	  	price=kms*20/2;
	  	printf("the ticket price is :%d",price);
	  }
	  else if(age>12&&age<=59)
	  {
	  	
	  	printf("the no of kms travelled :");
	  	scanf("%d",&kms);
	  	price=kms*20;
	  	printf("the ticket price is :%d",price);
	  }
	  else if(age>59)
	 {
	   printf("enter the gender :");
	   scanf(" %c",&gender);
     }
	  if(gender=='f')
	  {
	  	printf("enter the no of kms travelled :");
	  	scanf("%d",&kms);
	  	price=(kms*20-(40*20*kms)/100);
	  	printf("the ticket price is :%d",price);
}       if(gender=='m')
	  {
	  	printf("enter the no of kms travelled :");
	  	scanf("%d",&kms);
	  	price=(kms*20-(40*20*kms)/100);
	  	printf("the ticket price is :%d",price);
}

	  
}


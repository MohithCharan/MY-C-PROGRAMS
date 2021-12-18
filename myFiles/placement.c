#include<stdio.h>
int main()
{
	float gpa;
	int apt;
	char tech,hr;
	printf("enter your gpa :");
	scanf("%d",&gpa);
	if(gpa>8.5)
	{
		printf("you are eligible to write apt test\n");
		printf("your apt test marks :");
		scanf("%d",&apt);
		if(apt>60)	
	
	{
		printf("you are eligible to technical round");
		printf("enter your tr score (e/s/o) :");
		scanf("%c",&tech);
	
		if(tech=='e'||tech=='s')
		{
			printf("you are selected to hr round\n");
			printf("enter your hr comments :");
			scanf("%c",&hr);
		
		if(hr=='y')
		{
			printf("you are hired\n");
		}
		else 
		{
			printf("better luck next time");
		} 
	}
	else
		{
			printf("you are disqualified at tech round");
		} 
	}

	else
	{
		printf("you are not selected to technical round");
	} 
}
 else
	{
		printf("you are not qualified to wriiten test");
	} 
}
}

#include<stdio.h>
int main()
{
	int i,table;
	char ch;
	printf("if sister want to learn y/n: " );
	scanf("%c",&ch);
	while(ch=='y')
{
	printf("which table: ");
	scanf("%d",&table);
	
	if(table<=20)
	{
		for(i=1;i<=12;i++)
	{
		printf("%d*%d=%d\n",i,table,i*table);
	}
}
		else
		{
			printf("thank u\n");		
}
    printf("\nif sister want to learn y/n: ");
	scanf(" %c",&ch);
}
}

/*7. N numbers are given in the input. Read them and print their sum.*/


int main()
{
	int i,n,sum,num;
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;)
	{
		scanf("%d",&num);
		sum=sum+num;
}
/*
int i=1;
while(i<=n){// 1 2 3 4 5 ... n | n+1
	...
	...
	i++;
}

*/
printf("%d",sum);
}

#include<stdio.h>
int main()
{
	int n,k,sum=0,d,i;
	scanf("%d",&n);
	k=n*n;
//	printf("%d
",k);
	while(k>0)
	{
		d=k%10;
		sum=sum+d;
		k=k/10;
	}
//	printf("%d
",sum);
	if(n==sum)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}
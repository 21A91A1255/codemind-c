#include<stdio.h>
int main()
{
	int a,b,sum,temp,i,r,t;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d",&a);
	    temp=a;
	    sum=0;
		while(a>0)
		{
			r=a%10;
			sum=(sum*10)+r;
			a=a/10;
	    }
	    if(sum==temp)
		{
			printf("True
");
		}
		else
		{
		    printf("False
");
		}
	
	}
		
}
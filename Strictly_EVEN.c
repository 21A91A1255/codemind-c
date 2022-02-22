#include<stdio.h>
int main()
{
    int arr[100],n,i,even,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(arr[i]%2==0)
    	{
		
    	if(i%2==0)
        {
        	c++;
        }
    	
        else
        {
            c=0;
        }
    	}
    }
    if(c==0)
    {
    	printf("False");
	}
	else
	{
		printf("True");
	}
}
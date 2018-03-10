#include <stdio.h>
#include<string.h>

int main(void) {
	int s[100];
	
	int i,j,n,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}

	for(i=0;i<n;i++)
	{
		if(s[i]==i)
		{
		
			flag=1;
		}
	if(flag==1)
	{
		printf("%d",s[i]);
	}
	
	}
	if(flag==0)
	{
		printf("-1");
	}

	
	
		// your code goes here
		return 0;
	}

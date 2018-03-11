#include <stdio.h>

int main(void) {
	int a[100];
	int n,j,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if((i%2==0)&&(a[i]%2==1))
		{
			printf(" EVEN POSITION-ODD VALUES-%d\n",a[i]);
		}
		else
		{
		  if((i%2==1)&&(a[i]%2==0))
		  {
		  	printf("ODD POSITION -EVEN VALUES-%d\n",a[i]);
		  }
		}
	}
	
	// your code goes here
	return 0;
}

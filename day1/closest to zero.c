#include<stdio.h>
int main(void)
{
	int a[1000];
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]+a[j]==0)
			{
				printf("%d %d \n",a[i],a[j]);
			}

		}
	}
	return 0;
}

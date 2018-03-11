#include<stdio.h>
int main(void)
{
	int a[1000];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]+a[i+1]==a[i+2])
		{
			printf("%d %d %d",a[i],a[i+1],a[i+2]);
		}
	}
	return 0;
}

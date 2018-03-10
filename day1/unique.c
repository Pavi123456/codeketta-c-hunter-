#include <stdio.h>

int main(void) {
	char s[100];
	
	int i=0,j,n,temp,flag=0;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			{
				flag=1;
				s[j]='*';
				s[i]='*';
			
		            }
                           
		
		}
		
	}
for(i=0;i<n;i++)
{
	if(s[i]!='*')
	{
		printf("%c",s[i]);
	}
}
	
	
		// your code goes here
		return 0;
	}

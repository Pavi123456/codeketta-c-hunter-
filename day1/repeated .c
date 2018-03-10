#include <stdio.h>

int main(void) {
	char s[100],s1[100];
	
	int i=0,j,n,temp,flag=0,d;
	char c;
	scanf("%s",s1);
	strcpy(s,s1);
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
			
			}

		
		}
	
		
	}
	printf("%s",s);
	printf("\n");
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[j]=='*'&&s[i]!='*')
			{
				printf("%c",s[i]);
				break;
			
			}

		
		}
	
		
	}

printf("\n");
	
		if(flag==1)
		{
			printf("\nREPEATED");
		}
		else
		{
			printf("\nUNIQUE");
		}
	
		// your code goes here
		return 0;
	}

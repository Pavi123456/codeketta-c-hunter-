#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char s1[1000000],s2[1000000];
	int val1,val2,val3;
	scanf("%s",s1);
	scanf("%s",s2);
    val1=atoi(s1);
	val2=atoi(s2);
	val3=val1*val2;
	printf("%d",val3);
}

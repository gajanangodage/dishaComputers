#include<stdio.h>
int main()
{
	int a,pos = 0;
	printf("enter the value of a");
	scanf("%d",&a);
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			printf("The Perfect Square");
			pos++;
			break;
		}
	}
	if(pos==0)
	{
		printf("Not perfect ");
	}
}

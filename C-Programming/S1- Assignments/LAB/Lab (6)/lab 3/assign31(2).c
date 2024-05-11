#include<stdio.h>
int main()
{
	int a;
	for(a=1;a<=50;a++)
	{
		if(a%2==0)
			printf("\n %d is Even",a);
		else
			printf("\n %d is Odd",a);
	}
	return 0;
}


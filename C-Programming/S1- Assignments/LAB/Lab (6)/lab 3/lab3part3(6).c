#include<stdio.h>
int main()
{
	int i=2,j=2;
	while(i+1?--i:j++)
			printf("%d",i);
		return 0;
}
/*Output 1 Under while loop there is ternary loop so the condition i+1 is true 
 * assigns the value to --i else to the j++ part here i+1=3 so it turn to be true
 * assigns the value to--i and becomes 1-2=1.*/

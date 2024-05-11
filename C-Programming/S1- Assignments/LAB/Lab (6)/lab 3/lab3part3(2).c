#include<stdio.h>
int main()
{
	int tally=0;
for(;;)
	{
	if(tally==0)
	break;
	printf("%d",++tally);
    }
return 0;
}
/* Output: none There is no output because tally has value 0 and for loop
 * has no condition on it. In if(tally==0) there is no condition under it
 * the break statement breaks the condition comes out of the loop so there 
 * is no value for tally.*/


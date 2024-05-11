#include<stdio.h>
int main()
{
	int i,j,charVal='A';
	for(i=5;j>=1;i--)
	{
		for(j=0;j<i;j++)
			printf("%c",(charVal+j));
		printf("\n");
     }
     return 0;
  }
/* Output ABCDE
 * ABCD
 * ABC
 * AB
 * A   At first the for loop has 5 value and it decreases to 1 In for loop 
 * there is a nested for loop to print the character when j=0;j<i;j++ 
 * here j is lesser than i so it first prints the first 5 char and it decreases 
 * according to the first for loop till 1 */
		

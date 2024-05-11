#include<stdio.h>
int main()
{
	int cnt=1;
	do
	{
		printf("%d,",cnt);
	cnt+=1;      
	}while(cnt>=10);  printf("\nAfter loop cnt=%d",cnt); printf("\n");  
	return 0;  
}  
/* Output l,
 * After loop cnt=2 This is a do-while loop here cnt has value 1 and goes under
 * do while loop first prints the cnt value and next increased to cnt+=1 cnt=2
 * and has a limit less than 10 so prints the  increases cnt value with the 
 * statement under the printf */

#include<stdio.h>
int main()
{
	int loop=10;
	while(printf("Hello")&&loop--);
	return 0;
}
/* Output HelloHelloHelloHelloHelloHelloHelloHelloHelloHelloHello 
 * it prints 11 times because under while loop first it prints
 * hello and it decreases from 10 to 0 so it prints 10 times atlast
 * it becomes 11 times of hello */
 

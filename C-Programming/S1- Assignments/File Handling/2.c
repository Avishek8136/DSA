#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp=fopen("students.txt","r");
	char str[20];
	while(fscanf(fp,"%s",str) != EOF)
	{
		printf("%s\n",str);
	}
	fclose(fp);
	return 0;
}

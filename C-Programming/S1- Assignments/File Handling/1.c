#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	int n,i;
	fp=fopen("students.txt","w");
	char str[20];
	printf("Enter number of entries ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		fprintf(fp, "%s\n", str);
	}
	fclose(fp);
	return 0;
}

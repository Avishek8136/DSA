#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	int f=0,g=0;
	char c;
	fp=fopen("students.txt","r");
	do 
	{
		c = fgetc(fp);
		if( feof(fp) ) 
			break ;
		f=f+1;
		if((c==' ')||(c=='\0')||(c=='\n'))
			g=g+1;
    }
    while(1);
	fclose(fp);
	printf("The number of words in the file is %d and characters in the file is %d",g,f);
	return 0;
}

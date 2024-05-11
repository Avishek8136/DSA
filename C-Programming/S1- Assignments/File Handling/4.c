#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[20];
	int roll;
	int age;
	float cgpa;
}s;
int main()
{
	FILE *fp,*file;
	int n,g;
	char c,name[20];
	top :
	printf("\nWhat do you want to do\n1 to add details\n2 to update a student details\n3 to seek a student using roll no\n4 count number of students\n5 to delete a specific student from the file \n6 to end the program\n");
	scanf("%d",&n);
	if(n==1)
	{
		fp=fopen("students.txt","a");
		printf("Enter name, roll, age, cgpa ");
		scanf("%s",s.name);
		scanf("%d",&s.roll);
		scanf("%d",&s.age);
		scanf("%f",&s.cgpa);
		fprintf(fp, "%s %d %d %f\n", s.name,s.roll,s.age,s.cgpa);
		fclose(fp);
	}
	else if(n==2)
	{
		fp=fopen("students.txt","r");
		file=fopen("temp.txt","w");
		printf("Enter student name: ");
		scanf("%s",name);
		while(fscanf(fp,"%s%d%d%f",s.name,&s.roll,&s.age,&s.cgpa) != EOF)
		{
			if(strcmp(s.name,name)==0)
			{
				printf("Enter roll, age, cgpa ");
				scanf("%d",&s.roll);
				scanf("%d",&s.age);
				scanf("%f",&s.cgpa);
			}
			fprintf(file, "%s %d %d %f\n", s.name,s.roll,s.age,s.cgpa);
		}
		fclose(fp);
		fclose(file);
		if (remove("students.txt") != 0)
		  printf("Unable to delete the file");
		// Old file name
		char old_name[] = "temp.txt";
	  
		// Any string
		char new_name[] = "students.txt";
		int value;
	  
		// File name is changed here
		value = rename(old_name, new_name);
	  
		// Print the result
		if(!value)
		{
		}
		else
		{
			perror("Error");
		}
	}
	else if(n==3)
	{
		fp=fopen("students.txt","r");
		printf("Enter roll number ");
		scanf("%d",&g);
		while(fscanf(fp,"%s%d%d%f",s.name,&s.roll,&s.age,&s.cgpa) != EOF)
		{
			if(g==s.roll)
				printf("Name : %s\nRoll : %d\nAge : %d\nCGPA : %f\n", s.name,s.roll,s.age,s.cgpa);
		}
		fclose(fp);
	}
	else if(n==4)
	{
		fp=fopen("students.txt","r");
		g=0;
		do 
		{
			c = fgetc(fp);
			if( feof(fp) ) 
				break ;
			if((c=='\0')||(c=='\n'))
				g=g+1;
		}
		while(1);
		printf("The number of students is %d",g);
		fclose(fp);
	}
	else if(n==5)
	{
		fp=fopen("students.txt","r");
		file=fopen("temp.txt","w");
		printf("Enter student name: ");
		scanf("%s",name);
		while(fscanf(fp,"%s%d%d%f",s.name,&s.roll,&s.age,&s.cgpa) != EOF)
		{
			if(strcmp(s.name,name)!=0)
			{
				fprintf(file, "%s %d %d %f\n", s.name,s.roll,s.age,s.cgpa);
			}
		}
		fclose(fp);
		fclose(file);
		if (remove("students.txt") != 0)
		  printf("Unable to delete the file");
		// Old file name
		char old_name[] = "temp.txt";
	  
		// Any string
		char new_name[] = "students.txt";
		int value;
	  
		// File name is changed here
		value = rename(old_name, new_name);
	  
		// Print the result
		if(!value)
		{
		}
		else
		{
			perror("Error");
		}
	}
	else if(n==6)
	{
		exit(0);
	}
	goto top;
	return 0;
}

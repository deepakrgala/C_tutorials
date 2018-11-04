/*Write a program to extend above code for 5 employees & arrange them in ascending order based on experience
use file handling to process & manipulate the data */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LinkedIn
{
	char l_FirstName[20];
	char l_LastName[20];
	int l_ExpInYears;
}LinkedIn;

int main(int argc, char argv[])
{
	int i=0;
	
	LinkedIn Profile[5]= {{"MARK1", "CHUCK1",20},{"MARK2", "CHUCK2",10},{"MARK3", "CHUCK3",0},
						{"MARK4", "CHUCK4",25},{"MARK5", "CHUCK5",4}};
	
	LinkedIn Profile1;
	
	FILE *fp = NULL;

	// Bubble sort logic to arrange in ascending order of years of experience
	int temp_exp,j;
	char temp_FirstName[20], temp_LastName[20];
	for(i=0; i<5-1;i++)
	{
		for(j=0; j<5-i-1;j++)
		{
			if(Profile[j].l_ExpInYears>Profile[j+1].l_ExpInYears)
			{
				strcpy(temp_FirstName,Profile[j].l_FirstName);
				strcpy(temp_LastName,Profile[j].l_LastName);
				temp_exp=Profile[j].l_ExpInYears;
				
				strcpy(Profile[j].l_FirstName,Profile[j+1].l_FirstName);
				strcpy(Profile[j].l_LastName,Profile[j+1].l_LastName);
				Profile[j].l_ExpInYears=Profile[j+1].l_ExpInYears;
				
				strcpy(Profile[j+1].l_FirstName,temp_FirstName);	
				strcpy(Profile[j+1].l_LastName,temp_LastName);	
				Profile[j+1].l_ExpInYears=temp_exp;	
			}
		}
	}

	// write in the ascending order sorted by above bubble sort
	fp = fopen("C:/Users/Deepak/Desktop/test.txt", "w");

	for(i=0;i<5;i++)
	fprintf(fp, "%s %s %d", Profile[i].l_FirstName, Profile[i].l_LastName, Profile[i].l_ExpInYears);

	fclose(fp);

	// read the data from file and print on screen
	fp = fopen("C:/Users/Deepak/Desktop/test.txt", "r");
	while((fscanf(fp, "%s %s %d", Profile1.l_FirstName, Profile1.l_LastName, &Profile1.l_ExpInYears)) != EOF)
	{
		printf("LinkedIn profile informatn\n");
		printf("FirstName:%s\n", Profile1.l_FirstName);
		printf("LastName:%s\n", Profile1.l_LastName);
		printf("Experience:%d\n \n", Profile1.l_ExpInYears);
	}

	fclose(fp);

	system("PAUSE");
	return 0;
}

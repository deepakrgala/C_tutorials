/*Write a program to validate the Social network login date of birth & if the user is greater than > 18 years
then allow the user to create the account, If the user input is < 18 years then ask the user for confirmation
& give the option to re-enter the year & again validate it before accepting the other login details */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yyt=2015;
  	int mmt=11;
  	int ddt=28;
  	int yy,mm,dd, valid=0;
  	char answer[3]={0};

again:
	printf("Enter the date of birth in mm dd yyyy format:");
  	scanf("%d %d %d",&mm, &dd,&yy);

  	if((yyt-yy)>18)
  	{ 
		valid = 1;
    	goto other;
   	}
  	else if((yyt-yy)<18)
       	{ 
		   	printf("you are not 18 yet. Do you want to enter the date of birth again?:");
	 		scanf("%s",&answer);

	 		if(!strcmp(answer,"yes"))
	   		goto again;
       	}
	 		else if((yyt-yy)==18)
	      	{
				if(mm<mmt)
				{ 	
					printf("you are not 18 yet. Do you want to enter the date of birth again?");
		  			scanf("%s",&answer);
		  			
					if(!strcmp(answer,"yes"))
		    		goto again;
				}

	       		else if(mm==mmt )
		       	
				if(dd>ddt)
				{
			   		valid = 1;
			   		goto other;
			 	}

		       	else
				{ 
					printf("you are not 18 yet. Do you want to enter the date of birth again?");
			  		scanf("%s",&answer);
			  		printf("you entered %s",answer);

			  		if(!strcmp(answer,"yes"))
			  		goto again;
				}

	       	else if (mmt>mm)
			 {
				valid = 1;
				goto other;
			 }
	      }
    other:
		if(valid==1)
	    printf("\nEnter your other details");

	  	else printf("Thank you!! good bye !!");

		return 0;
}

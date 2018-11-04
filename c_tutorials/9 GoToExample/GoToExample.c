#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int no1, no2, no3;
	char ans[3];
	
	
	START:
		
	printf("\n Enter three numbers:");
	scanf("%d %d %d", &no1, &no2, &no3);
	
	if((no1==0)&&(no2==0)&&(no3==0))
	{
		printf("\n INVALID Numbers");
		printf("\n Do you want to enter again? :");
		scanf("%s",&ans);
		printf("\n %s",ans);
		if(!(strcmp(ans,"yes")))   /* Note use of strcmp() */
		
		goto START;
		
		else printf("\n Thank you");
	}
	else printf("\n the greatest of three is %d",((no1>no2)&&(no1>no3))?no1:((no2>no3)?no2:no3));
	
	return 0;
}

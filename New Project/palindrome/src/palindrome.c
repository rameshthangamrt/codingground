#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<palindrome.h>
int main(int argc , char * argv[])
{
int len = 0; 
int pdrm = TRUE;
int frw , rev ;
	
	if (argc == 1)
	{
		printf("invalid argument string"); 
		exit(FAILURE);
	} 
	printf("\nString : %s\n",argv[1]);
	len = strlen(argv[1]);
	rev = len - 1;
	for ( frw = 0 ;frw <= len / 2 ;frw++,rev--) 
	{
		printf("\n%c <> %c\n",argv[1][frw],argv[1][rev]);
		if ( argv[1][frw]!=	argv[1][rev])
		{
			pdrm = FALSE;
			break;
		}	
	} 	
	if (pdrm == FALSE)
	{
		printf("\nNOT PALINDROME\n");
	}
	else
	{
		printf("\nPALINDROME\n");
	}
	exit(SUCCESS);

}


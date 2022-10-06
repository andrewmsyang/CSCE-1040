/*
Andrew Yang ay0123 11229926
*/
#include <stdio.h>
#include "prots.h"//mistake correction
int main(void)
{
    
    	int size;
    	struct student db[100];
    
    	/* read info from file */
    	readData(db, &size);

    	/* print menu */
    	printMenu();
    
    	while(1) {
        /* get user query and call appropriate function */
        	if(getInput(db,size) == -1)
			break;
    	}
    	return 0;
}

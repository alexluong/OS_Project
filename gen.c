//Provided By Titus

#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

void proc_gen(int n)
{
	FILE* fp;
	char s[32];
	int prior;
	for(int i=0;i<n;i++)
	{
		prior = i%4;
		sprintf(s,"n%i",i);
		fp = fopen(s,"w");
		if(!fp)
			dam("file did not open");
		fprintf(fp,"%9i\n",0);				                // Position of the file
        fprintf(fp,"%9i\n",random_between(0,3));            // Priority in the file
        fprintf(fp,"%9i\n",random_between(10,200));         // Memory of the file
        fprintf(fp,"%9i\n",5000);                           // Runtime
        fprintf(fp,"%9i\n",0);                              // Start time
        fprintf(fp,"%9i\n",0);                              // End time
		
		for(int i=0;i<100;i++)
		{
			fprintf(fp,"%3i\n",i);
		}
	}
}
int main()
{
	proc_gen(10);
}
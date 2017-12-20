//No idea why its not working
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp_in, *fp_out;
	fp_in = fopen("para.txt", "r");
	fp_out = fopen("CorrectedPara.txt", "w");
	int c = fgetc(fp_in);
	while(c != -1)
	{
		if(c == '.' || c == ',' || c == ';' || c == ':')
		{
			fputc(c, fp_out);
			c = fgetc(fp_in);
			if(c == ' ')
			{
				
			}
			else if(c == EOF)
			{
				exit(EXIT_SUCCESS);
			}
			else
			{
				fputc(c, fp_out);
				c= fgetc(fp_in);
			}
		}
		else
		{
			fputc(c, fp_out);
			c = fgetc(fp_in);
		}	
	}
	return 0;
}

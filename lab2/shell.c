#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void help();
void smaller();
void sum();
void bigger();
void quit();
void jian();
void cheng();
void chu();
int main ()
{
	char command[256];
	while (1)
	{
		scanf ("%s",command);
		if (strcmp(command,"help") == 0)
		    {
			help();
		    }
		else if (strcmp(command,"quit") == 0)
		    {
			quit();
		    }
                else if (strcmp(command,"sum") == 0)
                    {
                        sum();
                    }
                else if (strcmp(command,"bigger") == 0)
                    {
                        bigger();
                    }
                else if (strcmp(command,"jian") == 0)
                    {
                        jian();
                    }
                else if (strcmp(command,"cheng") == 0)
                    {
                        cheng();
                    }
                else if (strcmp(command,"smaller") == 0)
                    {
                        smaller();
                    }
                else if (strcmp(command,"chu") == 0)
                    {
                        chu();
                    }
                else
                    {
			printf("Error:This a wrong command!\n");
                        help();
                    }

	}
	return 	0;
}
void help()
{
	printf("----------------------------\n");
	printf("command------What can do----\n");
	printf("quit-----quit this program.-\n");
	printf("bigger---output the bigger--\n");
	printf("smaller--output the smaller-\n");
	printf("jia-----------A+B-----------\n");
	printf("jian----------A-B-----------\n");
	printf("cheng---------AxB-----------\n");
	printf("chu-----------A/B-----------\n");
}	
void quit()
{
	exit(0);
}
void bigger()
{
	double a,b,c;
	printf("input two numbers:\n");
	scanf("%lf,%lf",&a,&b);
	c=a>b?a:b;
	printf("The bigger one is:");
	printf("%lf\n",c);
}
void smaller()
{
        double a,b,c;
        printf("input two numbers:\n");
        scanf("%lf,%lf",&a,&b);
        c=a<b?a:b;
        printf("The smaller one is:");
        printf("%lf\n",c);
}
void sum()
{
        double a,b,c;
        printf("input two numbers:\n");
        scanf("%lf,%lf",&a,&b);
        c=a+b;
        printf("The sum is:");
        printf("%lf\n",c);
}
void jian()
{
        double a,b,c;
        printf("input two numbers:\n");
        scanf("%lf,%lf",&a,&b);
        c=a-b;
        printf("The sub is:");
        printf("%lf\n",c);
}
void cheng()
{
        double a,b,c;
        printf("input two numbers:\n");
        scanf("%lf,%lf",&a,&b);
        c=a*b;
        printf("The mul is:");
        printf("%lf\n",c);
}
void chu()
{
        double a,b,c;
        printf("input two numbers:\n");
        scanf("%lf,%lf",&a,&b);
        c=a/b;
        printf("The div is:");
        printf("%lf\n",c);
}



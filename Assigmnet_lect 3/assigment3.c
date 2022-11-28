/* assignment 3:

	Write a c program that draw a pyramid of
	stars with height entered by the user
*****************************************************/
#include<stdio.h>
void main()
{
	int h;
	printf("please enter the hieght of the pyramid");
	scanf("%d",&h);

	for(int i=0;i<h;i++)
		{
		
			for(int j=h;j>i;j--)
			{
				printf(" ");
			}
			for(int w=0; w<i*2+1 ;w++)
			{
				printf("*");
			}
			
			printf("\n");
		}


}
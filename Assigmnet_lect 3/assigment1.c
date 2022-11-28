/* assignment 1:
		Write a C program that ask the user to
		enter two numbers and print their
		summation, this program should never
		ends until the user close the window 
*************************************************************************/
#include<stdio.h>
void main()
{
			int num1,num2,sum;
			while(1)
			{
			printf("please enter number 1 :");
			scanf("%d",&num1);
			printf("please enter number 2 :");
			scanf("%d",&num2);
			printf("the result = %d\n",num1+num2);
			}
}
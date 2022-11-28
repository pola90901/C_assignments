/* assignment 3:
	Write a code that will ask the user to enter 3
	numbers, the program will print the maximum
	number of them.	
******************************************************/
#include<stdio.h>
void main()
{		
int num1,num2,num3;
	printf("please enter 1st value ");
	scanf("%d",&num1);
	printf("please enter 2nd value ");
	scanf("%d",&num2);
	printf("please enter 3rd value ");
	scanf("%d",&num3);
	if(num1>num2&&num1>num3||(num1==num2&&num1>num3))
	{
		
		if((num1==num2&&num1>num3))
		{
			printf("1st & 2nd are  max and equal %d\n",num1);
		}
		else
		{
			printf("1st is max %d\n",num1);	
		}		
	}
	else if (num2>num1&&num2>num3||(num2==num3&&num2>num1))
	{
		
		if((num2==num3&&num2>num1))
		{
			printf("3rd & 2nd are  max and equal %d\n",num2);
		}
		else 
		{
		printf("2nd is max %d\n",num2);	
		}
	}
	else if (num3>num1&&num3>num2||(num1==num3&&num1>num2))
	{
		
		if(num1==num3&&num1>num2)
		{
			printf("3rd & 1st are  max and equal %d\n",num1);
		}
		else
		{
		printf("3rd is max %d\n",num3);	
		}
	}
	 else {
		 printf("the three values are the same  ");
		
	 }
	 }
/* assignment 1:
			Write a C code that ask the user to enter 10
			numbers, then ask him to enter another number
			to search on it in the 10 numbers and print its
			location in case it is found.
			In case the number is not found, it will print
			number no exist 
***************************************************************************************/			
#include<stdio.h>		
void main(){
		int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,find;
				printf("enter numer 1 :");
				scanf("%d",&num1);		
				printf("enter numer 2 :");
				scanf("%d",&num2);				
				printf("enter numer 3 :");
				scanf("%d",&num3);
				printf("enter numer 4 :");
				scanf("%d",&num4);
				printf("enter numer 5 :");
				scanf("%d",&num5);
				printf("enter numer 6 :");
				scanf("%d",&num6);
				printf("enter numer 7 :");
				scanf("%d",&num7);
				printf("enter numer 8 :");
				scanf("%d",&num8);
				printf("enter numer 9 :");
				scanf("%d",&num9);	
				printf("enter numer 10 :");
				scanf("%d",&num10);
				printf("enter value to search :");
				scanf("%d",&find);	
				if(find==num1)
				{
					printf("value is exist at element number 1");
				}
				else if (find==num2)
				{
					printf("value is exist at element number 2");
				}
				else if (find==num3)
				{
					printf("value is exist at element number 3");
				}
				else if (find==num4)
				{
					printf("value is exist at element number 4");
				}
				else if (find==num5)
				{
					printf("value is exist at element number 5");
				}
				else if (find==num6)
				{
					printf("value is exist at element number 6");
				}
				else if (find==num7)
				{
					printf("value is exist at element number 7");
				}
				else if (find==num8)
				{
					printf("value is exist at element number 8");
				}
				else if (find==num9)
				{
					printf("value is exist at element number 9");
				}
				else if (find==num10)
				{
					printf("value is exist at element number 10");
				}
				else
				{
					printf("numner no exist");
				}
				}
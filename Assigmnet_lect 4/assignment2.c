/* assignment 2:
		Write a C program to act as simple calculator, first it will ask the user to enter the
		operation ID, depending on the operation, the program will ask the user either to
		enter 1 operand or 2 operands and the program will execute the operation and print
		the result. Each operation should be implemented in a stand a long function.


*/
float add(float n_1,float n_2);
int modl(int n_1,int  n_2);
float sub(float n_1,float n_2);
float mult(float n_1,float n_2);
float div(int n_1,int n_2);
float calc(float n_1,float n_2,char op);
#include<stdio.h>
void main()
{

	float num1,num2,res;
		char operation;
		
		printf("enter num 1 :");
		scanf("%f",&num1);
		printf("enter num 2 :");
		scanf("%f",&num2);
		printf("enter operation :");
		scanf(" %c",&operation);

		res=calc(num1,num2,operation);
		printf("res=%f",res);
			}
	float calc(float n_1,float n_2,char op)
	{
	float res;	
		switch(op)
		{
			case '+':
			res=add(n_1,n_2);
		
			break;
			
			case '-':
			res=sub(n_1,n_2);
			break;
			
			case '*':
			res=mult(n_1,n_2);
			
			break;
			
			case '/':
			res=div(n_1,n_2);
			break;
			
			case '%':
			res=modl(n_1,n_2);
			
			break;
			
			default:
			return 0;
			}
			return res;
	}
		float add(float n_1,float n_2)
		{
			return n_1+n_2;
		}
		float sub(float n_1,float n_2)
		{
			return n_1-n_2;
		}	
		float mult(float n_1,float n_2)
		{
			return n_1*n_2;
		}
			int  modl(int  n_1,int  n_2)
		{
			return n_1%n_2;
		}
			float div(int n_1,int n_2)
		{
			return ((float)n_1)/n_2 	 		;
		}	
			
			
		}
/* assignment 1:
	Write a C program the implement 2 function:
	1- Function to get the maximum of 4 values
	2- Function to get the minimum of 4 values
	The program will ask the user first to enter the 4 values, then print the maximum
	number and minimum number of them*/


int Getmin(int  a, int b,int c, int d);
int Getmax(int  a, int b,int c, int d);
#include<stdio.h>
void main()
{
		int num1,num2,num3,num4,max,min;
		printf("plesase enter number 1 :");
		scanf("%d",&num1);
		printf("plesase enter number 2 :");
		scanf("%d",&num2);
		printf("plesase enter number 3 :");
		scanf("%d",&num3);
		printf("plesase enter number 4 :");
		scanf("%d",&num4);


		max=Getmax(num1,num2,num3,num4);
		min=Getmin(num1,num2,num3,num4);
		if(max ==0||min==0)
		{	
		printf(" one or more of the arguments are equal");	
		}
		else printf(" the maxium value is %d \n the minimum value is %d",max,min);
		}
		int Getmax(int a,int b,int c, int d)
		{
		if(a>b && a>c && a>d)
			{
				return a;
			}
		else if (b>a&& b>c && b>d)
		{
			return b;	
		}
		else if (c>a&& c>b && c>d)
		{
			return c;	
		}
		else if (d>a&& d>c && d>b)
		{
			return d;	
		}
		else return 0;
			
			
		}
		int Getmin(int  a, int b,int c, int d)
		{
			if(a<b && a<c && a<d)
				{
					return a;
				}
			else if (b<a&& b<c && b<d)
			{
				return b;	
			}
			else if (c<a&& c<b && c<d)
			{
				return c;	
			}
			else if (d<a&& d<c && d<b)
			{
				return d;	
			}
			else return 0;
			}